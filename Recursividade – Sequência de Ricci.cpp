#include <iostream>
using namespace std;

	int ricci(int numero, int valor1, int valor2){
		if(numero==0){
			return valor1;
		}else if(numero==1){
			return valor2;
		}else{
			return ricci(numero-1, valor1, valor2)+ricci(numero-2, valor1, valor2);
		}
	}
		
	int main(){
		int numero, valor1, valor2, aux=0;
			cin >> valor1 >> valor2 >> numero;
			while(aux!=numero){
				cout << ricci(aux, valor1, valor2) << "\n";
				aux++;
			}
		
		
	
	
	
    return 0;
}


