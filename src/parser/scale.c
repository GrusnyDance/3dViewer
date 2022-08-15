
#include "3d.h"

void scale(info *src, int scale) {
    float scl = powf(2, (float)(scale) / SCALE_STEP);
    for (unsigned int k = 0; k < src->indexV * 3; k++) {
        src->array[k] *= scl;
    }
}
