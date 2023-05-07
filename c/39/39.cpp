// 39.cpp : Thisfile contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>








int main()
{
	int kk[13] = { 0,31,31,31,31,31,31,31,28,30,30,30,30, };



	int vuodet1 = 0;
	int kuukaudet1 = 0;
	int p‰iv‰t1 = 0;

	int vuodet2 = 0;
	int kuukaudet2 = 0;
	int p‰iv‰t2 = 0;

	int summa1 = 0;
	int summa2 = 0;
	int erotus = 0;



	printf("syota p‰iv‰n m‰‰r‰ 1 (pp.kk.vvvv):\n");
	scanf("%d.%d.%d", &p‰iv‰t1, &kuukaudet1, &vuodet1);
	printf("syota p‰iv‰n m‰‰r‰ 2 (pp.kk.vvvv):\n");

	scanf("%d.%d.%d", &p‰iv‰t2, &kuukaudet2, &vuodet2);

	if (vuodet1 == vuodet2 && kuukaudet1 > kuukaudet2) {
		printf("Koska aloitusvuosi on sama kuin lopetusvuosi\n");
		printf("niin, aloituskuukausi ei voi olla suurempi kuin lopetuskuukausi!");
		exit(0);
	}

	if (vuodet1 == vuodet2 && kuukaudet1 == kuukaudet2 && p‰iv‰t1 > p‰iv‰t2) {
		printf("Koska aloitusvuosi on sama kuin lopetusvuosi\n");
		printf("ja aloituskuukausikin on sama kuin lopetuskuukausi\n");
		printf("niin aloituspaiva ei voi olla suurempi kuin lopetuspaiva!");
		exit(0);
	}




	for (int i = 1; i < vuodet1; i++) {
		if (vuodet1 % 4 == 0 && vuodet1 % 100 != 0 || vuodet1 % 400 == 0) {
			summa1 += 366;
		}
		else {
			summa1 += 365;
		}
	}
		for (int k = 1; k < kuukaudet1; k++) {
			summa1 += kk[k];

			


		}
		
		summa1 + p‰iv‰t1;
	
	    


		for (int i = 1; i < vuodet2; i++) {
			if (vuodet2 % 4 == 0 && vuodet2 % 100 != 0 || vuodet2 % 400 == 0) {
				summa2 += 366;
			}
			else {
				summa2 += 365;
			}
		}
			for (int k = 1; k < kuukaudet2; k++) {
				summa2 += kk[k];
				
				
			}
		 
		
		summa2 + p‰iv‰t2;
			

		erotus = summa2 - summa1;

			if (0 == erotus) {
				printf("Aloitusvuosi on sama kuin lopetusvuosi");
				exit(0);

			}

			if (0 > erotus) {
				printf("Aloitusvuosi on myahempi kuin lopetusvuosi");
				exit(0);

			}




			


		


		


		

		printf("%d.%d.%d ja %d.%d.%d valilla on ", p‰iv‰t1, kuukaudet1, vuodet1, p‰iv‰t2, kuukaudet2, vuodet2);


		printf("%d p‰iv‰‰\n", erotus);


	}




