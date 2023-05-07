// 36_arvuutuspeli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int i = 0; 
	int arvaus = 0;
	int vastaus = 0;
	int ala = 0, ylä = 100;
	
	char a;
	
	for (i = 1; i < 10, i++;) {

		vastaus = (rand() %
			(ylä - ala + 1)) + ala;
		
		printf("arvaa luku valilta 1-100 ");
		scanf("%d", &arvaus);

		
		
		

		 if (arvaus < vastaus || arvaus > vastaus) {
			
			while (arvaus != vastaus) {
				
				if (arvaus < vastaus){
					printf("Liian pieni luku, yrita uudelleen.");
					scanf("%d", &arvaus);
				}

				if (arvaus > vastaus) {
					printf("Liian suuri luku, yrita uudelleen.");
					scanf("%d", &arvaus);
				}
			
			
			}
		}
		


		
		printf("OIKEIN!\n");
		
		printf("Haluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)?\n");
		
		scanf(" %c", &a);
		
		
		
		if (a == 'e') {
			break;

		}
	    
		 
		 

	}
	
	
	
	
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
