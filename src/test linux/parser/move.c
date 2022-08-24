
#include "3d.h"

void move_x(info *src, int shift) {
    float shit = (float)shift / MOVE_STEP;
    for (unsigned int k = 0; k < src->indexV * 3; k += 3) {
        src->array[k] += shit;
    }
}

void move_y(info *src, int shift) {
    float shit = (float)shift / MOVE_STEP;
    for (unsigned int k = 1; k < src->indexV * 3; k += 3) {
        src->array[k] += shit;
    }
}

void move_z(info *src, int shift) {
    float shit = (float)shift / MOVE_STEP;
    for (unsigned int k = 2; k < src->indexV * 3; k += 3) {
        src->array[k] += shit;
    }
}
