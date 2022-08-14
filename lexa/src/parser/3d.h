
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ddd {
    unsigned int indexV; // вершины
    unsigned int indexF; // ломаные
    float **array;
    unsigned int **polygon; // последний символ каждой строки 0
} info;

void parserr(char *fileName, info *src);

void shift_x(info *src, int shift);
void shift_y(info *src, int shift);
void shift_z(info *src, int shift);
