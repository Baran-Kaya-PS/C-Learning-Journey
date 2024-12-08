//
// Created by Baran on 12/6/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arraygeneration.h"
void generateIntArray(int array[],int size){
    for (int i = 0; i < size;i++){
        array[i] = rand() % 100;
    }
}
void generateDoubleArray(double array[],int size){
    for (int i = 0; i < size;i++){
        array[i] = (rand() % 100)+(rand()%10)*0.1+(rand()%10)*0.01;
    }
}
void generateIntMatrix(int rows, int cols, int array[rows][cols]){
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols;j++) {
            array[i][j] = rand() % 100;
        }
    }
}
void printIntMatrix(int rows, int cols, int array[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t ", array[i][j]);
        }
        printf("\n");
    }
}

void sortArray(int array[], int size){ // tri à bulle
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-i;j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void printIntArray(const int *array, int size){
    int *p;
    p = array;
    printf("%d",*p);
    for (p =array+1;p< array+size;p++){
        printf("\t%d",*p);
    }
    printf("\n");
}
void printDoubleArray(const double *array, int size){
    double *p;
    p = array;
    printf("%lf",*p);
    for (p =array+1;p< array+size;p++){
        printf("\t%lf",*p);
    }
    printf("\n");
}