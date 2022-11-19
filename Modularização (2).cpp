#include <iostream>
#include <cmath>
using namespace std;

string metro(float distancia, string unidade){ 
	  cout << distancia << " cm" << endl;
      return distancia;
 }
string centimentro(float distancia, string unidade){ 
	  cout << distancia << " m" << endl;
      return distancia;
 }

int main(){
     float distancia;
     string unidade;
     cin >> distancia >> unidade;
     if (unidade='metro'){
		 metro(distancia, unidade);
		 }else if (unidade='centimetros'){
			 centimetro(distancia, unidade);
		 }else{ cout << "ERRO" << endl;}
			

return 0;
}






