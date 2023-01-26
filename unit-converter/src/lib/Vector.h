#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    int x;
    int y;
} Vector;

Vector* createVec(int x, int y);

float Vmagnitude(Vector vec);

int Vdot(Vector vec1, Vector vec2);

int Vdet(Vector vec1, Vector vec2);

float Vcos(Vector vec1, Vector vec2);

float Vsin(Vector vec1, Vector vec2);

float Vangle(Vector vec1, Vector vec2);

#endif