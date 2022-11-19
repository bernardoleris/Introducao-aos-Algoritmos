#include <iostream>
using namespace std;

	int main(){
	int numero, aux, total;
	cin >> numero;
	aux=numero;
	numero=1;
	while(aux!=numero){
		if(numero==1){
			cout << 0;
		}else if(numero==2){
			cout << 1;
		}else{
			total=(numero-2)+(numero-1);
			cout <<(total-2)+(total-1);
	    }
	    numero++;
	}
	return 0;
}

