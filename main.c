#include <stdio.h>
#include <math.h>
#include "bookrelated.h"
#include "arraygeneration.h"

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
    printf("decomposition de pi %lf = %ld + %lf\n",M_PI,l,d);
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
    int *p,i,j;
    i = 3;
    j = 4;
    p = max(&i,&j);
    printf("value of max(3,4) : %d\n",*p);
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
    int b[SIZE];
    generateIntArray(b,SIZE);
    sortArray(b,SIZE);
    printf("b[1] = %d",b[0]);
    for (i = 1; i < SIZE; i++){
        printf("\tb[%d] = %d",i+1,b[i]);
    }
    printf("\n median of b is %d\n",*median(b,SIZE));
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
    double avg;
    double sum;
    double c[SIZE];
    generateDoubleArray(c,SIZE);
    printf("c[1] = %f",c[0]);
    for (i = 1; i < SIZE; i++){
        printf("\tc[%d] = %f",i+1,c[i]);
    }
    avg_sum( c, SIZE, (double *) &avg, &sum);
    printf("the average of c is %lf\t the sum is %lf\n",avg,sum);
    return 0;
}
