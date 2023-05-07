// 37_kalenteri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int paivienLukumaaraKuukaudessa(int y) {
    
    if (y < 13 && y > 0) {
        int u;
        int kk[14] = { 1,31,31,31,31,31,31,31,28,30,30,30,30,12 };
        u = kk[y];
        return u;
    }

    else {
        
        return -1; 
    }
}





int main()
{
    
    int päivä = 0;
    int y = 0;
    
    printf("syota kuukausi");
    scanf("%d", &y);

  

  

  if (y < 13 && y > 0) {
      
      päivä = paivienLukumaaraKuukaudessa(y);
      
      
      
      printf("kuukaudessa %d on %d paivaa", y , päivä);
   
  }

  else {
      printf("kuukauta %d ei ole olemassa", y);
      
      
  
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
