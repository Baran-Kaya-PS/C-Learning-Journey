//
// Created by Baran on 12/6/2024.
//
#include "bookrelated.h"
void increment(int *p) { // p est un pointeur
    *p = *p + 1; // Modifie la valeur de la variable pointée
}

void increment2(int x){ // ne modifie la valeur de x que le temps de la fonction
    x = x+1;
}
void decompose(double x, long *int_part, double *frac_part){
    *int_part = (long) x;
    *frac_part = (double) (x - *int_part);
}
void max_min(int a[], int n, int *max, int *min){

}