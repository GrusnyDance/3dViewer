
#include "3d.h"

int main() {
    info a;
    parserr("objectives/cube.obj", &a);
    for (unsigned int k = 0; k < a.indexV; k++) {
        for (unsigned int g = 0; g < 3; g++) {
            printf("%f ", a.array[k][g]);
        }
        printf("\n");
    }
    printf("\n");
    for (unsigned int k = 0; k < a.indexF; k++) {
        int g = 0;
        while (a.polygon[k][g] != 0) {
            printf("%d ", a.polygon[k][g]);
            g++;
        }
        printf("\n");
    }
    return 0;
}