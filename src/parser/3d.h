
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MOVE_STEP 5.0
#define SCALE_STEP 5.0

typedef struct ddd {
    unsigned int indexV; // вершины
    unsigned int indexF; // ломаные
    float *array;
    unsigned int *polygon; // последний символ каждой строки 0
} info;

void parserr(char *fileName, info *src);

void move_x(info *src, int shift);
void move_y(info *src, int shift);
void move_z(info *src, int shift);

void scale(info *src, float scale);

void rotate_x(info *src, double turn);
void rotate_y(info *src, double turn);
void rotate_z(info *src, double turn);
