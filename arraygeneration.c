//
// Created by Baran on 12/6/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arraygeneration.h"
void generateIntArray(int array[],int size){
    srand(time(NULL));
    for (int i = 0; i < size;i++){
        array[i] = rand() % 100;
    }
}
void generateDoubleArray(double array[],int size){
    srand(time(NULL));
    for (int i = 0; i < size;i++){
        array[i] = (rand() % 100)+(rand()%10)*0.1+(rand()%10)*0.01;
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