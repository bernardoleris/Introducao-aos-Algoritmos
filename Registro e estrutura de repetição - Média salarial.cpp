#include <iostream>
#include <cmath>
using namespace std;

struct habitantes{
	float salario;
	int n_filhos, idade;
};


int main(){
	int quantidade;
	float mediasalarial, mediafilho, contS=0, contF=0, maiorsalario=0, maiormil=0, porcentual;
	cin >> quantidade;
	habitantes vetor[quantidade];
	for(int i=0; i<quantidade; i++){
		cin >> vetor[i].salario >> vetor[i].idade >> vetor[i].n_filhos;
	}
	
	for(int i=0; i<quantidade; i++){
		contS=contS+vetor[i].salario;
	}
	mediasalarial=contS/quantidade;
	cout << mediasalarial << endl;
	
	for(int i=0; i<quantidade; i++){
		contF=contF+vetor[i].n_filhos;
	}
	mediafilho=contF/quantidade;
	cout << mediafilho << endl;
	
	for(int i=0; i<quantidade; i++){
		if(vetor[i].salario>maiorsalario){
			maiorsalario=vetor[i].salario;
		}
	}
	cout << maiorsalario << endl;
	
	for(int i=0; i<quantidade; i++){
		if(vetor[i].salario>1000){
			maiormil++;
		}
	}
	porcentual=(maiormil/quantidade)*100;
	cout << round(porcentual) << "%" << endl;
	
	return 0;
}
