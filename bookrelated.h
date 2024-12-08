//
// Created by Baran on 12/6/2024.
//

#include <stdbool.h>

#ifndef MEMORY_GESTION_BOOKRELATED_H
#define MEMORY_GESTION_BOOKRELATED_H
#endif //MEMORY_GESTION_BOOKRELATED_H

// CHAPTER 11
void increment(int *p);
void increment2(int x);
void decompose(double x,long *,double *); // pas besoin de nommer les variables pointeurs
void max_min(const int a[],int n,int *,int *);
void f(const int *p); // const keywork so f can only read the var,not modify
int *max(int *a ,int *b);
int *median(const int a[],int n);
void avg_sum(const double a[],int n,double *avg,double *sum);
void swap(int *,int*);
void find_two_largest(const int a[],int n,int *largest,int *second_largest);
void pay_amount(int dollars,int *twenties,int *tens,int *five,int *ones);
//CHAPTER 12
void reverse(); // read 10 numbers then write the number in reverse order
int largest_value(int *array,int size);
void VLA1D(int n);
void VLA2D(int m,int n);
bool search(const int *,int n, int key);