#include <stdio.h>
#include <stdlib.h>
#include "./lib/Vector.h"

int main () {
    Vector* vec = createVec(1, 2);
    printf("%0.2f \n", Vmagnitude(*vec));
    printf("%d \n", Vdot(*vec, *vec));
    free(vec);
    return 0;   
}
