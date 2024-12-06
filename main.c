#include <stdio.h>
#include <math.h>
#include "bookrelated.h"
#define N 50
int main() {

    int a = 42;
    increment2(a);
    printf("Valeur de a : %d\n", a); // Affiche 42
    increment(&a); // Passe l'adresse de a
    printf("Valeur de a : %d\n", a); // Affiche 43
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
    long l; // définir le long qui contiendra int(M_PI)
    double d; // définir le double qui contiendra (double) (l - M_PI)
    decompose(M_PI,&l,&d);
    printf("décomposition de pi %lf = %ld + %lf",M_PI,l,d);
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
    return 0;
}
