// 32_kolikkonheitto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printRandoms(int lower, int upper,
    int count)
{

    int r = 0;
    int l = 0;
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
            (upper - lower + 1)) + lower;



        if (num == 0) {
            r++;

        }

        if (num == 1) {
            l++;


        }
    }


    printf("Heittojen tulos: %d kruunua ja %d klaavaa \n", r, l);


}

int main()
{
    int lower = 0, upper = 1, count = 100;







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
