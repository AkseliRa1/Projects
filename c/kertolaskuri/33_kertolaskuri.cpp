// 33_kertolaskuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printRandoms(int lower, int upper,
    int count)
{

    int luku1 = 0;
    int luku2 = 0;
    int vastaus = 0;
    int i;
    int tarkistus = 0;

    
    
    for (i = 0; i < count; i++) {
        
        int luku1 = (rand() %
            (upper - lower + 1)) + lower;

        int luku2 = (rand() %
            (upper - lower + 1)) + lower;

        tarkistus = luku1 * luku2;

        printf("Anna luku - 1 lopettaaksesi\n");
        printf("Paljonko on %d kertaa %d ?\n", luku1, luku2);
        scanf("%d", &vastaus);
        if (vastaus == -1) {
            break;
        }

        else if (vastaus == tarkistus) {
            printf("oikein!\n");
        }

        else {
            
            while (vastaus != tarkistus){
                printf("Vaarin, yrita uudelleen > ");
                scanf("%d", &vastaus);
            }

                printf("oikein!\n");
        }
           
            
    
    
    }

    


    


}

int main()
{
    int lower = 1, upper = 9, count = 100;







    srand(time(0));

    printRandoms(lower, upper, count);







    return 0;
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
