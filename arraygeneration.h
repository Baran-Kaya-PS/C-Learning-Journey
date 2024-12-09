//
// Created by Baran on 12/6/2024.
//
#define SIZE 5
#ifndef MEMORY_GESTION_ARRAYGENERATION_H
#define MEMORY_GESTION_ARRAYGENERATION_H

#endif //MEMORY_GESTION_ARRAYGENERATION_H
void generateIntArray(int array[],int size);
void sortArray(int array[],int size);
void generateDoubleArray(double array[],int size);
void generateIntMatrix(int rows, int cols, int array[rows][cols]);
void printIntMatrix(int rows, int cols, int array[rows][cols]);
void printIntArray(const int *array, int size);
double inner_product(const double *a,const double *b,int n);
void printDoubleArray(const double *array, int size);
void printCharArray(const char *c, int size);