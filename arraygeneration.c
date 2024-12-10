//
// Created by Baran on 12/6/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arraygeneration.h"


void generateIntArray(int array[], int size){
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

void bubbleSort(int *array, int size){ // tri à bulle
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
void printCharArray(const char *c, int size){
    char *p;
    p = c;
    printf("%c",*p);
    for (p = c+1;p<c+size;p++){
        printf("\t%c",*p);
    }
    printf("\n");
}
void quickSort(int *array,int start, int end){
    if (start < end){
        int q = partition(array,start,end);
        quickSort(array,start,(q-1));
        quickSort(array,(q+1),end);
    }
    return;
}

int partition(int *array, int start, int end) {
    int x = array[end]; // valeur du pivot
    int i = start-1;
    for (int j = start; j < end;j++){ // on commence par trier
        if (array[j] <= x){ // si une valeur est inférieur au pivot
            i++;
            exchange(array,i,j); // on échange a[i],a[j]; à la fin on échange a[i] avec le pivot
        } // on itère sur tout le tableau pour tout simplement mettre les valeurs supérieur à droite
    } // cette partition va nous permettre d'éjecter les valeurs plus grandes que le pivot sur la partie gauche du tableau
    exchange(array,i+1,end);
    return i+1; //index après partition du pivot
}
void exchange(int *array, int a, int b){
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}
