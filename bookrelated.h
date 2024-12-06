//
// Created by Baran on 12/6/2024.
//

#ifndef MEMORY_GESTION_BOOKRELATED_H
#define MEMORY_GESTION_BOOKRELATED_H
#endif //MEMORY_GESTION_BOOKRELATED_H

void increment(int *p);
void increment2(int x);
void decompose(double x, long *, double *); // pas besoin de nommer les variables pointeurs
void max_min(const int a[], int n, int *, int *);
void f(const int *p); // const keywork so f can only read the var, not modify
int *max(int *a , int *b);
int *median(const int a[], int n);
void avg_sum(const double a[],int n, double *avg, double *sum);