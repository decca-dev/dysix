#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Vector* createVec(int x, int y) {
    Vector* vec = (Vector*) malloc(sizeof(Vector));
    if (vec == NULL) {
        printf("Failed to malloc\n");
        exit(0);
    }
    vec->x = x;
    vec->y = y;
    return vec;
};

float Vmagnitude(Vector vec) {
    return sqrt(pow(vec.x, 2) + pow(vec.y, 2));
}

int Vdot(Vector vec1, Vector vec2) {
    return vec1.x * vec2.x + vec1.y * vec2.y;
}

int Vdet(Vector vec1, Vector vec2) {
    return vec1.x * vec2.y - vec2.x * vec1.y;
}

float Vcos(Vector vec1, Vector vec2) {
    return Vdot(vec1, vec2) / (Vmagnitude(vec1) * Vmagnitude(vec2));
}

float Vsin(Vector vec1, Vector vec2) {
    return Vdet(vec1, vec2) / (Vmagnitude(vec1) * Vmagnitude(vec2));
}

float Vangle(Vector vec1, Vector vec2) {
    return acos(Vcos(vec1, vec2));
}
