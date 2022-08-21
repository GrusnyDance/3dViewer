#include "3d.h"

static void pars_f(FILE *file, info *src, char *c);
static void pars_v(FILE *file, info *src, char *c, float *max);
static int isnum(char c);

void parserr(char *fileName, info *src) {
    FILE *file = fopen(fileName, "r");
    float max = 0.0;
    src->indexF = 0;
    src->indexV = 0;
    char c = 'c', buff = 'b';
    src->array = calloc(1, sizeof(float));
    src->polygon = calloc(1, sizeof(unsigned));
    while (c != EOF) {
        c = fgetc(file);
        if (buff == 'v' && c == ' ') {
            pars_v(file, src, &c, &max);
        } else if (buff == 'f' && c == ' ') {
            pars_f(file, src, &c);
        }
        buff = c;
    }
    fclose(file);
    if (fabs(max) > 1) scale(src, (1 / max));  // scale normalization
}

static void pars_v(FILE *file, info *src, char *c, float *max) {
    while (*c != '\n' && *c != EOF) {
        *c = fgetc(file);
        int minus = 1;
        if (*c == '-') {
            minus = -1;
            *c = fgetc(file);
        }
        if (isnum(*c)) {
            src->array = realloc(src->array, (src->indexV + 1) * sizeof(float));
//            src->array[src->indexV] = 0;
//            while (isnum(*c)) {
//                src->array[src->indexV] *= 10;
//                src->array[src->indexV] += *c - 48;
//                *c = fgetc(file);
//            }
//            if (*c == '.' || *c == ',') {
//                *c = fgetc(file);
//                long int ten = 10;
//                while (isnum(*c)) {
//                    src->array[src->indexV] += (float)(*c - 48) / ten;
//                    ten *= 10;
//                    *c = fgetc(file);
//                }
//            }
             fseek(file, -1, 1);
             fscanf(file, "%f", src->array + src->indexV);
            if (fabs(src->array[src->indexV]) > *max) *max = fabs(src->array[src->indexV]);
            src->array[src->indexV] *= minus;
            src->indexV += 1;
        }
    }
}

static void pars_f(FILE *file, info *src, char *c) {
    int k = 1;
    unsigned first = 0;
    while (*c != '\n' && *c != EOF) {
        *c = fgetc(file);
        if (isnum(*c)) {
            if (k <= 3) {
                src->polygon = (unsigned*)realloc(src->polygon, (1 + src->indexF) * sizeof(unsigned));
            } else {
                src->polygon = (unsigned*)realloc(src->polygon, (src->indexF + 3) * sizeof(unsigned));
                src->polygon[src->indexF] = first;
                src->polygon[src->indexF + 1] = src->polygon[src->indexF - 1];
                src->indexF += 2;
            }
            src->polygon[src->indexF] = 0;
            // fseek(file, -1, SEEK_CUR);
            // fscanf(file, "%d", src->polygon[src->indexF]);
//            while (isnum(*c)) {
//                src->polygon[src->indexF] *= 10;
//                src->polygon[src->indexF] += *c - 48;
//                *c = fgetc(file);
//            }
            if (isnum(*c)) { fseek(file, -1, 1); fscanf(file, "%u", src->polygon + src->indexF); }
            if (k == 1) {
                first = src->polygon[src->indexF];
            }
            k++;
            while (*c != ' ' && *c != '\n' && *c != EOF) *c = fgetc(file);
            src->indexF++;
        }
    }
}

static int isnum(char c) {
    return (c > 47 && c < 58);
}
