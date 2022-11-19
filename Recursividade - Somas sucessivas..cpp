#include <iostream>
#include <cmath>
using namespace std;

	int soma(int valor, int multiplicador){
		if(multiplicador==0){
			return 0;
		}else if(multiplicador==1){
			return valor;
		}else{
			return valor+soma(valor, multiplicador-1);
	}
	}
	
    int main(){
		int valor, multiplicador;
		cin >> valor >> multiplicador;
		cout << soma(valor, multiplicador);
		
	
	return 0;
}	



