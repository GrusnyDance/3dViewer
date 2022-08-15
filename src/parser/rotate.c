
#include "3d.h"

void rotate_x(info *src, double turn) {
    // for (unsigned int k = 0; k < src->indexV; k++) {
    //     src->array[k][1] *= cos(turn);
    //     src->array[k][1] += src->array[k][2] * sin(turn);
    //     src->array[k][2] *= cos(turn);
    //     src->array[k][2] -= src->array[k][1] * sin(turn);
    // }
    for (unsigned k = 1; k < src->indexV * 3; k += 3) {
        src->array[k] *= cos(turn);
        src->array[k] += src->array[k + 1] * sin(turn);
        src->array[k + 1] *= cos(turn);
        src->array[k + 1] -= src->array[k] * sin(turn);
    }
}

void rotate_y(info *src, double turn) {
    // for (unsigned int k = 0; k < src->indexV; k++) {
    //     src->array[k][0] *= cos(turn);
    //     src->array[k][0] -= src->array[k][2] * sin(turn);
    //     src->array[k][2] *= cos(turn);
    //     src->array[k][2] += src->array[k][0] * sin(turn);
    // }
    for (unsigned int k = 0; k < src->indexV * 3; k += 3) {
        src->array[k] *= cos(turn);
        src->array[k] -= src->array[k + 2] * sin(turn);
        src->array[k + 2] *= cos(turn);
        src->array[k + 2] += src->array[k] * sin(turn);
    }
}

void rotate_z(info *src, double turn) {
    // for (unsigned int k = 0; k < src->indexV; k++) {
    //     src->array[k][0] *= cos(turn);
    //     src->array[k][0] += src->array[k][1] * sin(turn);
    //     src->array[k][1] *= cos(turn);
    //     src->array[k][1] -= src->array[k][0] * sin(turn);
    // }
    for (unsigned int k = 0; k < src->indexV * 3; k += 3) {
        src->array[k] *= cos(turn);
        src->array[k] += src->array[k + 1] * sin(turn);
        src->array[k + 1] *= cos(turn);
        src->array[k + 1] -= src->array[k] * sin(turn);
    }
}
