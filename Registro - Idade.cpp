#include <iostream>
#include <cmath>
using namespace std;

struct pessoa{
	string nome;
	int dia, mes, ano;
};


int main(){
	int quantidade, dia, mes, ano;
	cin >> quantidade;
	pessoa vetor[quantidade];
	for(int i=0; i<quantidade; i++){
		cin >> vetor[i].nome >> vetor[i].dia >> vetor[i].mes >> vetor[i].ano;
	}
	cin >> dia >> mes >> ano;
	
	for(int i=0; i<quantidade; i++){
		if(vetor[i].ano>ano){
			cout << vetor[i].nome << ": " << "-1" << endl;
		}else if(ano>vetor[i].ano and ano-vetor[i].ano>1){
			cout << vetor[i].nome << ": " << ano-vetor[i].ano << " anos" << endl;
		}else if(ano-vetor[i].ano==1 and mes>vetor[i].mes){
			cout << vetor[i].nome << ": 1" << " ano" << endl;
		}else if(ano-vetor[i].ano==1 and mes<vetor[i].mes){
			cout << vetor[i].nome << ": 0" << " ano" << endl;
		}else if(ano==vetor[i].ano and mes==vetor[i].mes and dia>vetor[i].dia ){
			cout << vetor[i].nome << ": 0" << " ano" << endl;
		}else if(ano==vetor[i].ano and mes==vetor[i].mes and dia<vetor[i].dia){
			cout << vetor[i].nome << ": 1" << " ano" << endl;
		}
			
	}
	return 0;
}

