#include <iostream>
using namespace std;

int tribo(int numero){
	if(numero==1 or numero==2){
		return 1;
	}else if(numero==3){
	    return 2;
	}else{
		return tribo(numero-1)+tribo(numero-2)+tribo(numero-3);}}
		
int main(){
	int numero, aux;
	cin >> numero;
	aux=1;
	while(aux!=numero+1){
	cout << tribo(aux) << " ";
	aux++;}
	
	
	
	
	
    return 0;
}

