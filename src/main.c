#include <stdio.h>
#include <stdlib.h>
#include "../headers/Vector.h"

int main () {
    Vector* vec = createVec(1, 2);
    printf("%0.2f \n", magnitude(*vec));
    printf("%d \n", dot(*vec, *vec));
    free(vec);
    return 0;   
}