
#include "3d.h"

void scale(info *src, int scale) {
    for (unsigned int k = 0; k < src->indexV; k++) {
        src->array[k][0] *= scale;
        src->array[k][1] *= scale;
        src->array[k][2] *= scale;
    }
}
