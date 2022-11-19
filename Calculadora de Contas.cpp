#include <iostream>
using namespace std;

int main(){
	float somaT=0, somaB=0, valorTotal;
	int nTailor, nBernardo;
	cout << "Digite aqui o numero de itens do Tailor:" << endl;
	cin >> nTailor;
	float vetorT[nTailor];
	if(nTailor>0){
		cout << "Digite aqui os valores de cada item separadamente" << endl;
		for (int i=0; i<nTailor; i++){
			cin >> vetorT[i];
			somaT=somaT+vetorT[i];
		}
	}else{
	}
	
	cout << "Digite aqui o numero de itens do Bernardo:" << endl;
	cin >> nBernardo;
	float vetorB[nBernardo];
	if(nBernardo>0){
		cout << "Digite aqui os valores de cada item separadamente" << endl;
		for (int i=0; i<nBernardo; i++){
			cin >> vetorB[i];
			somaB=somaB+vetorB[i];
		}
	}else{
	}
	
	cout << "Digite aqui o valor total da compra" << endl;
	cin >> valorTotal;
	
	cout << "Tailor devera pagar: " << "R$ " << (valorTotal-somaT-somaB)/2 + somaT << endl;
	cout << "Bernardo devera pagar: " << "R$ " << (valorTotal-somaT-somaB)/2 + somaB << endl;
	
	return 0;
}
	
