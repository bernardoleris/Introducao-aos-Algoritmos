#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
   int primeiro, numero, ultimo, auxnumero, numerotrocado;
   int cont=0;
   cin >> numero;
  
   ultimo=numero%10;
   auxnumero=numero;
   
   while(auxnumero!=0){
	   primeiro=auxnumero%10;
	   auxnumero=auxnumero/10;
	   cont++;}
   
   numerotrocado=numero-pow(10,cont-1)*primeiro;
   numerotrocado=numerotrocado-ultimo;
   numerotrocado=numerotrocado+primeiro;
   numerotrocado=numerotrocado+pow(10,cont-1)*ultimo;

   cout << numerotrocado;
return 0;
}


