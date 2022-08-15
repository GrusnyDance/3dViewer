

#include "3d.h"

static void pars_f(FILE *file, info *src, int *f, char *c);
static void pars_v(FILE *file, info *src, int *v, char *c);
static int isnum(char c);

void parserr(char *fileName, info *src) {
    // int error = 0;
    src->indexF = 0;
    src->indexV = 0;
    // printf("%s\n", fileName);
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("FILE ERROR\n");
        // exit(1);
    }
    char c = 'c', buff = 'b';
    while (c != EOF) {
        c = fgetc(file);
        if (buff == 'v' && c == ' ') src->indexV++;
        else if (buff == 'f' && c == ' ') src->indexF++;
        buff = c;
    }
    c = 'c';
    buff = 'b';
    fseek(file, 0, SEEK_SET);
    src->array = (float*)calloc(src->indexV * 3, sizeof(float));
    // for (unsigned int k = 0; k < src->indexV; k++) {
    //     src->array[k] = (float*)calloc(3, sizeof(float));
    // }
    src->polygon = (unsigned int**)malloc(src->indexF * sizeof(unsigned int*));
    int v = 0, f = 0;
    while (c != EOF) {
        c = fgetc(file);
        if (buff == 'v' && c == ' ') {
            pars_v(file, src, &v, &c);
        } else if (buff == 'f' && c == ' ') {
            pars_f(file, src, &f, &c);
        }
        buff = c;
    }
    fclose(file);
}

static void pars_v(FILE *file, info *src, int *v, char *c) {
    int k = 0;
    while (*c != '\n' && *c != EOF) {
        *c = fgetc(file);
        int minus = 1;
        if (*c == '-') {
            minus = -1;
            *c = fgetc(file);
        }
        if (isnum(*c)) {
            while (isnum(*c)) {
                src->array[*v] *= 10;
                src->array[*v] += *c - 48;
                *c = fgetc(file);
            }
            if (*c == '.' || *c == ',') {
                *c = fgetc(file);
                long int ten = 10;
                while (isnum(*c)) {
                    src->array[*v] += (float)(*c - 48) / ten;
                    ten *= 10;
                    *c = fgetc(file);
                }
            }
            src->array[*v] *= minus;
            *v += 1;
        }
    }
    // *v += 1;
}

static void pars_f(FILE *file, info *src, int *f, char *c) {
    int k = 0;
    unsigned int *f_buff = calloc(1, sizeof(unsigned int));
    while (*c != '\n' && *c != EOF) {
        *c = fgetc(file);
        if (isnum(*c)) {
            if (k) f_buff = realloc(f_buff, (k + 1) * sizeof(unsigned int));
            f_buff[k] = 0;
            while (isnum(*c)) {
                f_buff[k] *= 10;
                f_buff[k] += *c - 48;
                *c = fgetc(file);
            }
            while (*c != ' ' && *c != '\n' && *c != EOF) *c = fgetc(file);
            k++;
        }
    }
    src->polygon[*f] = (unsigned int*)calloc(k + 1, sizeof(unsigned int));
    for ( ; k > 0; k--) src->polygon[*f][k - 1] = f_buff[k - 1];
    // src->polygon[*f][0] = 0;
    free(f_buff);
    *f += 1;
}

static int isnum(char c) {
    return (c > 47 && c < 58);
}
