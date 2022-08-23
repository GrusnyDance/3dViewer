#include "3d.h"

static void pars_f(FILE *file, info *src, char *c);
static void pars_v(FILE *file, info *src);
static int isnum(char c);

void parserr(char *fileName, info *src) {
    FILE *file = fopen(fileName, "r");
    src->indexF = 0;
    src->indexV = 0;
    char c = 'c', buff = 'b';
    src->array = calloc(1, sizeof(float));
    src->polygon = calloc(1, sizeof(unsigned));
    while (c != EOF) {
        c = fgetc(file);
        if (buff == 'v' && c == ' ') {
            pars_v(file, src);
        } else if (buff == 'f' && c == ' ') {
            pars_f(file, src, &c);
        }
        buff = c;
    }
    if (!src->indexF) free(src->polygon);
    if (!src->indexV) free(src->array);

    fclose(file);
    if (fabs(src->maxV) > 1) scale(src, (1 / src->maxV));  // scale normalization
}

static void pars_v(FILE *file, info *src) {
    src->array = realloc(src->array, (src->indexV + 3) * sizeof(float));
    fscanf(file, "%f %f %f", &src->array[src->indexV], &src->array[src->indexV + 1], &src->array[src->indexV + 2]);
    if (fabs(src->array[src->indexV]) > src->maxV) src->maxV = fabs(src->array[src->indexV]);
    if (fabs(src->array[src->indexV + 1]) > src->maxV) src->maxV = fabs(src->array[src->indexV + 1]);
    if (fabs(src->array[src->indexV + 2]) > src->maxV) src->maxV = fabs(src->array[src->indexV + 2]);
    src->indexV += 3;
}

static void pars_f(FILE *file, info *src, char *c) {
    int k = 1;
    unsigned int first = src->indexF;
    while (*c != '\n' && *c != EOF) {
        *c = fgetc(file);
        if (isnum(*c)) {
            if (k < 3) {
                src->polygon = realloc(src->polygon, (1 + src->indexF) * sizeof(unsigned));
                if (src->polygon == NULL) {
                    printf("MEMORY ERROR\n");
                    exit(1);
                }
            } else {
                src->polygon = realloc(src->polygon, (2 + src->indexF) * sizeof(unsigned));
                if (src->polygon == NULL) {
                    printf("MEMORY ERROR\n");
                    exit(1);
                }
                src->polygon[src->indexF] = src->polygon[src->indexF - 1];
                src->indexF++;
            }
            src->polygon[src->indexF] = 0;
            // fseek(file, -1, SEEK_CUR);
            // fscanf(file, "%d", src->polygon[src->indexF]);
            while (isnum(*c)) {
                src->polygon[src->indexF] *= 10;
                src->polygon[src->indexF] += *c - 48;
                *c = fgetc(file);
            }
            src->polygon[src->indexF]--;
            k++;
            while (*c != ' ' && *c != '\n' && *c != EOF) *c = fgetc(file);
            src->indexF++;
        }
    }
    src->polygon = realloc(src->polygon, (2 + src->indexF) * sizeof(unsigned));
    if (src->polygon == NULL) {
        printf("MEMORY ERROR\n");
        exit(1);
    }
    src->polygon[src->indexF] = src->polygon[src->indexF - 1];
    src->polygon[src->indexF + 1] = src->polygon[first];
    src->indexF += 2;
}

static int isnum(char c) {
    return (c > 47 && c < 58);
}
