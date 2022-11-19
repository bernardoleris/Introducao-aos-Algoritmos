#include <iostream>
using namespace std;

float calculadora(float altura, char genero){
	float pesoideal;
	if(genero=='M'){
		pesoideal=62.1*altura-44.7;
	}else if(genero=='H'){
		pesoideal=72.7*altura-58;
	}
	return pesoideal;
}
	
struct pacientes {
   string nome;
   char sexo;
   float altura, peso;
};

int main(){
	int quantidade, maispesado=0, aux=0;
	cin >> quantidade;
	pacientes vetor[quantidade];
	for(int i=0; i<quantidade; i++){
		cin >> vetor[i].nome;
		cin >> vetor[i].sexo;
		cin >> vetor[i].altura;
		cin >> vetor[i].peso;
	}

	for(int i=0; i<quantidade; i++){
		if(vetor[i].peso>maispesado){
		maispesado=vetor[i].peso;
		aux=i;
		}
	}
	cout << vetor[aux].nome << endl;
	for(int i=0; i<quantidade; i++){
		if(calculadora(vetor[i].altura, vetor[i].sexo)<vetor[i].peso){
			cout << vetor[i].nome << " " << calculadora(vetor[i].altura, vetor[i].sexo)-vetor[i].peso << endl;
		}
	}
		
	for(int i=0; i<quantidade; i++){
		if(calculadora(vetor[i].altura, vetor[i].sexo)>vetor[i].peso){
			cout << vetor[i].nome << " " << calculadora(vetor[i].altura, vetor[i].sexo)-vetor[i].peso << endl;
		}
	}
	
		
	return 0;
}




