#include <iostream>
#include <cmath>
using namespace std;

    int main(){
	int numero, aux;
	cin >> numero;
    aux=1;
    while(aux!=numero){
		if(aux==1 or aux==2){
			cout << "1";
		}
		else if(aux==0){
			cout << "0";
		}
		else{
			cout << (aux-1)+(aux-2);
		}
	cout << "\n";
	aux++;
    }
	return 0;
}




