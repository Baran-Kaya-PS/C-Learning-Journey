//
// Created by Baran on 12/6/2024.
//

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

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
void store_zeros(int *,int n);
double inner_product(const double *a,const double *b,int n);
char* reverseChar(const char *c,char *t, int size);
bool isPalindrome(const char *c,int SIZE);
char digit_to_hex_char(int digit);
int read_line(char str[], int n);
int count_spaces(const char s[]);
int count_spaces2(const char *s);
size_t strlen(const char *s); // can be condensed, see p297 of the book
char *strcat(char *s1, const char *s2);
char capitalize(char *c);
char *censor(char *c); // replace "foo" by "xxx"
void get_extension(const char *file_name, char *extention);
void get_extension2(const char *file_name, char *extention);
void build_index_url(const char *domain, char *index_url);
bool test_extension(const char *file_name,const char *extension);
void remove_filename(char *url);
void reverse_name(char *name, int size);
int str_to_int(const char *str);
double compute_average_word_length(const char *sentence);
void encrypt(char *message, int shift);
char char_shift(char c,int n);
bool isPalindrome2(const char *c,int size);
bool is_anagrams(const char *word1, const char *word2);