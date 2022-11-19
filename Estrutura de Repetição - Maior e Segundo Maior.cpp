#include <iostream>
using namespace std;

int main (){
	int aux=0;
	float valor, maiorvalor=0, segundomaior=0, soma;
	soma=0;
	while(aux!=7){
		cin >> valor;
		soma=soma+valor;
		if(valor>maiorvalor){
	    segundomaior=maiorvalor;
	    maiorvalor=valor;
	    }else if(valor>segundomaior){
			segundomaior=valor;}
			aux++;}
	cout << maiorvalor << "\n" << segundomaior <<  "\n" << (soma-maiorvalor-segundomaior)/5;
	return 0;
}
