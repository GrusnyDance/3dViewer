
#include "3d.h"

void rotate_x(info *src, double turn) {
    turn *= M_PI / 180;
    for (unsigned k = 1; k < src->indexV; k += 3) {
        double y =  src->array[k];
        src->array[k] *= cos(turn);
        src->array[k] += src->array[k + 1] * sin(turn);
        src->array[k + 1] *= cos(turn);
        src->array[k + 1] -= y * sin(turn);
    }
}

void rotate_y(info *src, double turn) {
    turn *= M_PI / 180;
    for (unsigned int k = 0; k < src->indexV; k += 3) {
        double x = src->array[k];
        src->array[k] *= cos(turn);
        src->array[k] -= src->array[k + 2] * sin(turn);
        src->array[k + 2] *= cos(turn);
        src->array[k + 2] += x * sin(turn);
    }
}

void rotate_z(info *src, double turn) {
    turn *= M_PI / 180;
    for (unsigned int k = 0; k < src->indexV; k += 3) {
        double x = src->array[k];
        src->array[k] *= cos(turn);
        src->array[k] += src->array[k + 1] * sin(turn);
        src->array[k + 1] *= cos(turn);
        src->array[k + 1] -= x * sin(turn);
    }
}
