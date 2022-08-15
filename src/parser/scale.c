
#include "3d.h"

void scale(info *src, int scale) {
    for (unsigned int k = 0; k < src->indexV * 3; k++) {
        src->array[k] *= scale;
    }
}
