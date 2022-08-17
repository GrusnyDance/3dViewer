
#include "3d.h"

void scale(info *src, float scale) {
    float scl = powf(M_E, scale / SCALE_STEP);
    for (unsigned int k = 0; k < src->indexV; k++) {
        src->array[k] *= scl;
    }
}

