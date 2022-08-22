
#include "3d.h"

int main() {
    info a;
    parserr("objectives/Controller.obj", &a);
    // for (unsigned int k = 0; k < a.indexV; k++) {
    //     printf("%f ", a.array[k]);
    //     if (!((k + 1) % 3)) printf("\n");
    // }
    // printf("\n");
    // for (unsigned int k = 0; k < a.indexF; k++) {
    //     printf("%d ", a.polygon[k]);
    //     if (!((k + 1) % 6)) printf("\n");
    // }
    printf("\n\n%d\n", a.indexV / 3);
    return 0;
}