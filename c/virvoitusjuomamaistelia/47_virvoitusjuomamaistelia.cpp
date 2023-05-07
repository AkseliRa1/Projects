// 47_virvoitusjuomamaistelia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    
    int j1[10];
    int j2[10];
    int j3[10];
    int j4[10];
    
    int keskiarvo1 = 0;
    int keskiarvo2 = 0;
    int keskiarvo3 = 0;
    int keskiarvo4 = 0;
    int summa1 = 0;
    int summa2 = 0;
    int summa3 = 0;
    int summa4 = 0;
    
    int i;
    
    
    printf("Anna juoma numero 1. pisteet\n");
    
    
    
    
    for (i = 0; i < 10; i++ ){
        printf("Anna arvosana(1 - 5) >");
        scanf("%d", &j1[i]);

        while (j1[i] > 5 || j1[i] < 1) {
            printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !");
            scanf("%d", &j1[i]);

        }



    
    }

    for (i = 0; i < 10; i++) {
        summa1 += j1[i];


    }

    keskiarvo1 = summa1 / i;
    
    printf("Anna juoma numero 2. pisteet\n");




    for (i = 0; i < 10; i++) {
        printf("Anna arvosana(1 - 5) >");
        scanf("%d", &j2[i]);
        
        while (j2[i] > 5 || j2[i] < 1) {
            printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !");
            scanf("%d", &j2[i]);

        }


    }

    for (i = 0; i < 10; i++) {
        summa2 += j2[i];


    }

    keskiarvo2 = summa2 / i;


    printf("Anna juoma numero 3. pisteet\n");




    for (i = 0; i < 10; i++) {
        printf("Anna arvosana(1 - 5) >");
        scanf("%d", &j3[i]);
       
        while (j3[i] > 5 || j3[i] < 1) {
            printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !");
            scanf("%d", &j3[i]);

        }


    }

    for (i = 0; i < 10; i++) {
        summa1 += j3[i];


    }

    keskiarvo3 = summa3 / i;


    printf("Anna juoma numero 4. pisteet\n");




    for (i = 0; i < 10; i++) {
        printf("Anna arvosana(1 - 5) >");
        scanf("%d", &j4[i]);


        while (j4[i] > 5 || j4[i] < 1) {
            printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !");
            scanf("%d", &j4[i]);

        }



    }

    for (i = 0; i < 10; i++) {
        summa4 += j4[i];


    }

    keskiarvo4 = summa4 / i;
    
    if (keskiarvo1 < 3) {
        printf("Juoma numero 1 on kelvotonta\n");
    }
    
    if (keskiarvo1 > 3) {
        printf("Juoma numero 1 on kelvollista\n");
    }

    if (keskiarvo2 < 3) {
        printf("Juoma numero 2 on kelvotonta\n");
    }

    if (keskiarvo2 > 3) {
        printf("Juoma numero 2 on kelvollista\n");
    }
    
    if (keskiarvo3 < 3) {
        printf("Juoma numero 3 on kelvotonta\n");
    }

    if (keskiarvo3 > 3) {
        printf("Juoma numero 3 on kelvollista\n");
    }
    if (keskiarvo4 < 3) {
        printf("Juoma numero 4 on kelvotonta\n");
    }

    if (keskiarvo4 > 3) {
        printf("Juoma numero 4 on kelvollista\n");
    }

    return(0);
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
