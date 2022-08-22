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
    if (!src->indexF) free(src->polygon);
    if (!src->indexV) free(src->array);

    unsigned int *bufff = calloc(src->indexF * 2, sizeof(unsigned int));
    for (unsigned k = 0, i = 0; i < src->indexF; i += 3, k += 6) {
        bufff[k] = src->polygon[i] - 1;
        bufff[k + 1] = src->polygon[i + 1] - 1;
        bufff[k + 2] = src->polygon[i + 1] - 1;
        bufff[k + 3] = src->polygon[i + 2] - 1;
        bufff[k + 4] = src->polygon[i + 2] - 1;
        bufff[k + 5] = src->polygon[i] - 1;
    }

//    src->polygon = realloc(src->polygon, src->indexF * 2 * sizeof(unsigned int));
    free(src->polygon);
    src->polygon = calloc(src->indexF * 2, sizeof(unsigned int));
    src->indexF *= 2;
    for (unsigned k = 0; k < src->indexF; k++) {
        src->polygon[k] = bufff[k];
    }

    free(bufff);
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
            if (src->array == NULL) {
                printf("MEMORY ERROR\n");
                exit(1);
            }
            src->array[src->indexV] = 0;
            while (isnum(*c)) {
                src->array[src->indexV] *= 10;
                src->array[src->indexV] += *c - 48;
                *c = fgetc(file);
            }
            if (*c == '.' || *c == ',') {
                *c = fgetc(file);
                long int ten = 10;
                while (isnum(*c)) {
                    src->array[src->indexV] += (float)(*c - 48) / ten;
                    ten *= 10;
                    *c = fgetc(file);
                }
            }
//             fseek(file, -1, 1);
//             fscanf(file, "%f", src->array + src->indexV);
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
                src->polygon = realloc(src->polygon, (1 + src->indexF) * sizeof(unsigned));
                if (src->polygon == NULL) {
                    printf("MEMORY ERROR\n");
                    exit(1);
                }
            } else {
                src->polygon = realloc(src->polygon, (src->indexF + 3) * sizeof(unsigned));
                if (src->polygon == NULL) {
                    printf("MEMORY ERROR\n");
                    exit(1);
                }
                src->polygon[src->indexF] = first;
                src->polygon[src->indexF + 1] = src->polygon[src->indexF - 1];
                src->indexF += 2;
            }
            src->polygon[src->indexF] = 0;
            // fseek(file, -1, SEEK_CUR);
            // fscanf(file, "%d", src->polygon[src->indexF]);
            while (isnum(*c)) {
                src->polygon[src->indexF] *= 10;
                src->polygon[src->indexF] += *c - 48;
                *c = fgetc(file);
            }
//            if (isnum(*c)) { fseek(file, -1, 1); fscanf(file, "%u", src->polygon + src->indexF); }
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
