//
// Created by Baran on 12/6/2024.
#include "bookrelated.h"
#include <ctype.h>
// CHAPTER 11 POINTERS
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
void max_min(const int a[], int n, int *max, int *min){
    int i;
    *max,*min = a[0];
    for (i = 0; i < n;i++){
        if(a[i] > *max) *max = a[i]; // assigne le max
        if(a[i] < *min) *min = a[i]; // assigne le min
    }
}
int *max(int *a, int*b){
    if (*a > *b) return a;
    return b;
}
int *median(const int a[], int n){
    return &a[n/2];
}
void avg_sum(const double a[],int n, double *avg, double *sum){
    int i;
    *sum = 0.0;
    for (i = 0;i<n;i++){
        *sum+=a[i];
    }
    *avg = *sum/n;
}
void swap(int *i, int*j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void find_two_largest(const int a[], int n, int *largest, int *second_largest){
    int *i;
    *largest = a[0];
    *second_largest = a[1];
    for (i = a+2; i < a+n;i++){
        if (*largest > *second_largest){
            if (*second_largest < *i) *second_largest = *i;
        } else {
            if (*largest < *i) *largest = *i;
        }
        if (*largest < *second_largest) swap(largest,second_largest);
    }
}
void pay_amount(int dollars,int *twenties,int *tens,int *five,int *ones){
    *twenties = dollars/20;
    dollars = dollars%20;
    *tens = dollars/10;
    dollars = dollars%10;
    *five = dollars/5;
    dollars = dollars%5;
    *ones = dollars;
}
//CHAPTER 12 POINTERS AND ARRAYS
void reverse(){ // utilisation des pointeurs pour itérer dans le tableau
    int a[9],*p;
    for (p = a ; p < a+9; p++){
        printf("\nEnter a number : ");
        scanf("%d",p); // itère de a[0] à a[n], n = 9;
    }
    printf("\nreverse order\n");
    for (p = a+8; p >= a;p--){
        printf(" %d",*p);
    }
}
int largest_value(int *array,int size){
    int largest = array[0];
    for (int *i = array+1; i < array+size;i++){
        if (*i > largest) largest = *i;
    }
    return largest;
}
void VLA1D(int n){
    int a[n];
    for (int i = 0; i <n; i++){
        a[i] = i*i; // taille du tableau créer pendant le programme (stack), libéré une fois que VLA1D se terminé
    }
}
void VLA2D(int m,int n){ //variable-lenght array
    int a[m][n], (*p)[n]; // p est un pointeur vers un tableau de n entiers
    p=a; // a = a[0][0], donc p->a[0] #première ligne, a[1] = ligne 1 etc...
    // il y a (a[0]...a[n-1]) car il y a n colonnes, donc p pointe vers une ligne de n valeurs (cad nb colonnes)
    // exemple, (*p)[2] // affiche a[0][2],
    // si on incrément p tel que p++ alors on aura a[1], ainsi on peux afficher (*p)[2] = a[1][2]
}
bool search(const int *array,int n, int key){
    int *p;
    for (p = array; p<array+n;p++){
        if (*p == key) return true;
    }
    return false;
}
void store_zeros(int *a,int n){
    for (int *p = a; p < a+n; p++){
        *p = 0;
    }
}
double inner_product(const double *a,const double *b,int n){
    double inner_product = 0;
    double *p1,*p2;
    p1 = a;
    p2 = b;
    while (p1 < a+n){
        inner_product += (*p1) * (*p2);
        p1++;
        p2++;
    }
    return inner_product;
}
void reverseOriginalChar(char *c, int size){
    int i,j;
    char t;
    for (i = 0, j = size-1; i < j; i++, j--){
        t = c[i];
        c[i] = c[j];
        c[j] = t;
    }
}
char* reverseChar(const char *c,char *t, int size){
    int i;
    for (i = 0; i < size;i++){
        t[i] = c[(size-1)-i];
    }
    return t;
}
bool isPalindrome(const char *c,int size){
    char t[size];
    reverseChar(c,t,size);
    for (int i = 0; i < size; i++){
        if (c[i] != t[i]) return false;
    }
    return true;
}
char digit_to_hex_char(int digit){
    return "0123456789ABCDEF"[digit%16];
}
int read_line(char str[], int n) {
    int ch, i = 0,start = 0;
    while ((ch = getchar()) != EOF) {
        printf("[DEBUG] Caractere lu : '%c' (code ASCII : %d)\n", ch, ch);
        if (!start && ch == ' ') continue; // tant que start est égal à 0 et que ch = ' ', on recommence la loop
        start = 1;
        if (ch == '\n') {
            printf("[DEBUG] Saut de ligne détecté\n");
            if (i < n - 1) {
                str[i++] = '\n';
            }
            break;
        }
        if (i < n - 1) {
            str[i++] = ch;
        } else {
            printf("[DEBUT] Caractere ignore");
        }
    }
    str[i] = '\0';
    return i;
}
int count_spaces(const char s[]){
    int count = 0, i;
    for (i = 0; s[i] != '\0';i++){ // tant que l'on atteint pas la fin du str on continue "s[i] != '\0'"; for (expr1;expr2;expr3){}
        if (s[i] == ' ') count++;
    }
    return count;
}
int count_spaces2(const char *s){ // s va être une copie de la variable en entree
    int count = 0;
    for (;*s != '\0';s++){
        if (*s == ' ') count++;
    }
    return count;
}
size_t strlen(const char *s){
    size_t n;
    for (n = 0;*s != '\0';n++,s++);
    return n;
}
char *strcat(char *s1, const char *s2){ //concat
    char *p = s1;
    while (*p)
        p++;
    while (*p++ = *s2++); // tant que (*p = *s2) != '\0'; p++, s++
    return s1;
}
char capitalize(char *c){
    if (*c >= 'a' && *c <= 'z'){ // c compris entre petit a, petit z;
//        *c -= 32;
        *c = toupper(*c);
    }
    return *c;
}
char *censor(char *c){ //replace every "foo" by "xxx"
    char *p1 = c, *p2 = c+1, *p3 = c+2;
    while (*p3 != '\0'){
        if (*p1 == 'f' && *p2 == 'o' && *p3 == 'o'){
            *p1 = 'x';
            *p2 = 'x';
            *p3 = 'x';
        }
        p1++;
        p2++;
        p3++;
    }
    return c;
}
void get_extention(const char *file_name, char *extention){
    char *p = file_name;
    while (*p != '.' && *p != '\0') p++;
    while (*p != '\0'){
        *extention = *p;
        extention++;
        p++;
    }
    *(extention+1) = '\0';
}