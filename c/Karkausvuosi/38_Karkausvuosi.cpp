// 38_Karkausvuosi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int karkausvuosilaskuri(int vuosi){

    
    
    
    
    
    if (vuosi % 400 == 0) {
        printf("%d on karkaus vuosi", vuosi);
    }



    
    else if (vuosi % 100 == 0) {

        printf("%d ei ole karkaus vuosi", vuosi);

    }
    
    
    
    else if (vuosi % 4 == 0) {

    printf("%d on karkaus vuosi", vuosi);


    }

    else {
        
    printf("%d ei ole karkaus vuosi", vuosi);

    }

    return 0; 

}









int main()
{
    
    int v;
    printf("syota vuosi ");
    scanf("%d", &v);

  karkausvuosilaskuri(v);




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


