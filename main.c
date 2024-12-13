#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bookrelated.h"
#include "arraygeneration.h"
#include "time.h"
#include <string.h>
#define MAX_REMIND 50
#define MSG_LEN 50
#define ROWS 4
#define COLS 4
int main() { // argc = argument count, argv = argument vector
//    printf("[DEBUG] Avant la boucle principale\n");
//    srand(time(NULL));
//    // CHAPTER 11 POINTERS
//    int a = 42;
//    increment2(a);
//    printf("Valeur de a : %d\n", a); // Affiche 42
//    increment(&a); // Passe l'adresse de a
//    printf("Valeur de a : %d\n", a); // Affiche 43
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    long l; // définir le long qui contiendra int(M_PI)
//    double d; // définir le double qui contiendra (double) (l - M_PI)
//    decompose(M_PI,&l,&d);
//    printf("decomposition de pi %lf = %ld + %lf\n",M_PI,l,d);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int *p,i,j;
//    i = 3;
//    j = 4;
//    p = max(&i,&j);
//    printf("value of max(3,4) : %d\n",*p);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int b[SIZE];
//    generateIntArray(b,SIZE);
//    bubbleSort(b,SIZE);
//    printf("b[1] = %d",b[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tb[%d] = %d",i+1,b[i]);
//    }
//    printf("\n median of b is %d\n",*median(b,SIZE));
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    double avg;
//    double sum;
//    double cc[SIZE];
//    generateDoubleArray(cc,SIZE);
//    printf("c[1] = %f",cc[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tc[%d] = %f",i+1,cc[i]);
//    }
//    avg_sum( cc, SIZE, (double *) &avg, &sum);
//    printf("the average of c is %lf\t the sum is %lf\n",avg,sum);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    j = 4;
//    i = 5;
//    swap(&j,&i);
//    printf("%d j,\t%d i\n",j,i);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int largest, second_largest;
//    printf("\n\nb[1] = %d",b[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tb[%d] = %d",i+1,b[i]);
//    }
//    find_two_largest(b,SIZE,&largest,&second_largest);
//    printf("the 2 largest values are \t%d\t%d\n",largest,second_largest);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int tw,te,fi,on;
//    pay_amount(199,&tw,&te,&fi,&on);
//    printf("to miminise 199 dolars into money bill you have\t\t %d 20$, %d 10$, %d 5$, %d 1$",tw,te,fi,on);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    //CHAPTER 12 POINTERS AND ARRAYS
////    reverse(); //fonctionne
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    printf("\n\n\n");
//    int matrix[ROWS][COLS]; // Pointeur vers matrix[0][0], équivalent a *p = matrix[0][0]
//    generateIntMatrix(ROWS,COLS,matrix);
//    printIntMatrix(ROWS,COLS,matrix);
//    printf("\nthe maximum value of the matrix is %d\n\n\n",largest_value(*matrix,ROWS*COLS));
//    /////////////////////////////////////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////////////////////////////////////
//    int array[SIZE];
//    generateIntArray(array,SIZE);
//    array[SIZE-1] = 3;
//    bool array_have_3 = search(array,SIZE,3);
//    printf("%d\n",array_have_3);
//    printIntArray(array,SIZE);
//    store_zeros(array,SIZE);
//    printIntArray(array,SIZE);
//    /////////////////////////////////////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////////////////////////////////////
//    double array1[SIZE];
//    double array2[SIZE];
//    generateDoubleArray(array1,SIZE);
//    generateDoubleArray(array2,SIZE);
//    printDoubleArray(array1,SIZE);
//    printf("\n");
//    printDoubleArray(array2,SIZE);
//    double i_p = inner_product(array1,array2,SIZE);
//    printf("\n %lf\n",i_p);
//    int array3[SIZE];
//    generateIntArray(array3,SIZE);
//    printIntArray(array3,SIZE);
//    printf("\nlargest value of a = %d\n",largest_value((int*)array3,SIZE));
//    int secondlargest;
//    find_two_largest(array3,SIZE,&largest,&secondlargest);
//    printf("\nlargest value of a = %d\n, the second is %d\n",largest,secondlargest);
//    /////////////////////////////////////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////////////////////////////////////
//    char c[SIZE] = {"radar"};
//    char t[SIZE];
//    reverseChar(c,t,SIZE);
//    printCharArray(c,SIZE);
//    printCharArray(t,SIZE);
//    bool iP = isPalindrome(c,SIZE);
//    printf("%d\n",iP);
//    int arr[SIZE];
//    generateIntArray(arr,SIZE);
//    printIntArray(arr,SIZE);
//    quickSort(arr,0,SIZE-1);
//    printIntArray(arr,SIZE);
//    /////////////////////////////////////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////////////////////////////////////
//    char *str[50];
//    read_line(str,50); // stoque l'entrée utilisateur dans str
//    printf("\naffichage du mot : %s\n",str);
//    printf("%d\n",count_spaces2(str)); // print 4
//    printf("%d\n",count_spaces2(str)); // print 4; it means that *s in count space copy str and do not modify it
//    /////////////////////////////////////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////////////////////////////////////
//    char str1[SIZE];
//    strcpy(str1,"test");
//    printf("%s\n",str1);
//    char str2[SIZE];
//    strncpy(str2,str1,sizeof(str1)-1);
//    printf("%s\n",str2);
//    str1[sizeof(str1)-1] = '\0';
//    str1[sizeof(str1)-2] = 'z'; // manipulation avec sizeof pour l'index
//    printf("%s\n",str1);
//    int len;
//    len = strlen(str1);
//    printf("the len of str1 is %d\n",len);
//    strcpy(str1,"1234567891");
//    len = strlen(str1);
//    printf("%s\n",str1);
//    printf("the len of str1 is %d\n",len);
//    char *p;
//    p = strcat(str1,str2);
//    printf("%s\n",p);
//    strcpy(str1,str2);
    /////////////////////////////////////////////////////////////////////////////////
//    / PRINTS A ONE MONTH REMINDER LIST
//    / we got a dictionnary (not a real one) with days and reminder, at the end of the program, the arrays are sorted by day by shifting on the right
//    / Btw reminders[I] = the string, Reminders[I][J] = the value of the index j of the string at i
    /////////////////////////////////////////////////////////////////////////////////
//    char reminders[MAX_REMIND][MSG_LEN + 3]; // Tableau de rappels
//    char day_str[3], msg_str[MSG_LEN + 1];   // Stockage du jour et du message
//    int day, i, j, num_remind = 0;
//
//    for (;;) {
//        if (num_remind == MAX_REMIND) {
//            printf("-- No space left --\n");
//            break;
//        }
//
//        printf("\nEnter day and reminder: ");
//        scanf("%2d", &day); // Lit un entier (le jour)
//        printf("[DEBUG] scanf: Jour lu: %d\n", day);
//
//        if (day == 0) {
//            printf("\n[DEBUG] Fin du programme.\n");
//            break;
//        }
//
//        sprintf(day_str, "%2d", day); // Formatage du jour dans une chaîne
//        printf("[DEBUG] sprintf: Jour formate (day_str): '%s'\n", day_str);
//
//        printf("Enter reminder message: ");
//        read_line(msg_str, MSG_LEN); // Lit le message associe au jour dans le buffer
//
//        // Recherche de l'emplacement où inserer le rappel
//        for (i = 0; i < num_remind; i++) {
//            printf("[DEBUG] Comparaison: '%s' vs '%s'\n", day_str, reminders[i]);
//            if (strcmp(day_str, reminders[i]) < 0) {
//                printf("[DEBUG] '%s' doit être insere avant '%s'\n", day_str, reminders[i]);
//                break;
//            }
//        }
//
//        // Decalage des rappels existants pour inserer le nouveau
//        for (j = num_remind; j > i; j--) {
//            strcpy(reminders[j], reminders[j - 1]);
//            printf("[DEBUG] Decalage: reminders[%d] = reminders[%d]\n", j, j - 1);
//        }
//
//        // Insere le nouveau rappel
//        strcpy(reminders[i], day_str);
//        strcat(reminders[i], " "); // Ajoute un espace entre le jour et le message
//        strcat(reminders[i], msg_str);
//        printf("[DEBUG] Nouveau rappel insere: '%s'\n", reminders[i]);
//
//        num_remind++; // Incremente le nombre de rappels
//        printf("[DEBUG] Nombre de rappels: %d\n", num_remind);
//    }
//
//    // Affichage des rappels tries
//    printf("\nDay Reminder\n");
//    for (i = 0; i < num_remind; i++) {
//        printf("%s\n", reminders[i]);
//        printf("[DEBUG] Reminder %d: '%s'\n", i + 1, reminders[i]);
//    }
//    char s[SIZE];
//    printf("Entrez une chaine : ");
//    read_line(s, SIZE);
//
//    // Vérifie le contenu
//    printf("\nChaine complete : '%s'\n", s);
//    printf("Caracteres individuels :\n");
//    for (int i = 0; s[i] != '\0'; i++) {
//        printf("'%c' (code ASCII : %d)\n", s[i], s[i]);
//    }
//
//    printf("y a t'il eu un saut de ligne ? \n");
//    if (s[strlen(s) - 1] == '\n') {
//        printf("Oui, il y a un saut de ligne !\n");
//    } else {
//        printf("Non, il n'y a pas de saut de ligne.\n");
//    }
//    char ch = 'b';
//    printf("Majuscule : %c\n", capitalize(&ch)); // Devrait afficher 'B'
//    return 0;
//    char str[] = "food fool foot";
//    printf("Avant censure : %s\n", str);
//    printf("Après censure : %s\n", censor(str));
    // Test 1 : Fichier avec extension classique
//    char extension[100];
//    get_extension("file.txt", extension);
//    printf("Extension de 'file.txt' : '%s'\n", extension); // Attendu : ".txt"
//
//    // Test 2 : Fichier sans extension
//    get_extension("file", extension);
//    printf("Extension de 'file' : '%s'\n", extension); // Attendu : ""
//
//    // Test 3 : Fichier avec point au début
//    get_extension(".hiddenfile", extension);
//    printf("Extension de '.hiddenfile' : '%s'\n", extension); // Attendu : ""
//
//    // Test 4 : Fichier avec plusieurs points
//    get_extension("archive.tar.gz", extension);
//    printf("Extension de 'archive.tar.gz' : '%s'\n", extension); // Attendu : ".gz"
//
//    // Test 5 : Fichier avec point final
//    get_extension("file.", extension);
//    printf("Extension de 'file.' : '%s'\n", extension); // Attendu : ""
//    char extension[100];
//    get_extension2("example.txt", extension);
//    printf("Extension de 'example.txt' : '%s'\n", extension);
//
//    get_extension2("example", extension);
//    printf("Extension de 'example' : '%s'\n", extension);
//
//    get_extension2("archive.tar.gz", extension);
//    printf("Extension de 'archive.tar.gz' : '%s'\n", extension);
    char index_url[100];
    char domain1[] = "knking.com";
    build_index_url(domain1, index_url);
    printf("Test 1 - Domain: %s -> Index URL: %s\n", domain1, index_url);

    char domain2[] = "example.org";
    build_index_url(domain2, index_url);
    printf("Test 2 - Domain: %s -> Index URL: %s\n", domain2, index_url);
    return 0;
}
