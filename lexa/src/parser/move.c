
#include "3d.h"

void move_x(info *src, int shift) {
    for (unsigned int k = 0; k < src->indexV; k++) {
        src->array[k][0] += shift;
    }
}

void move_y(info *src, int shift) {
    for (unsigned int k = 0; k < src->indexV; k++) {
        src->array[k][1] += shift;
    }
}

void move_z(info *src, int shift) {
    for (unsigned int k = 0; k < src->indexV; k++) {
        src->array[k][2] += shift;
    }
}
