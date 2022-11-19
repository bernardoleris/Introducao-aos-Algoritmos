#include <iostream>
using namespace std;

	int reformulacao(int vet[], int tam){
		int aux=0;
		int contador=0;
			while(aux!=(tam-1)){
				if((vet[aux])%3==0){
					vet[aux]=(-1);
				}else if((vet[aux])%3!=0){
					contador++;
			}
				aux++;
			}
			aux=0;
			while(aux!=(tam-1)){
				return vet[tam];
				aux++;
			}
				return contador;
	}
			
	int main(){
		int tamanho, aux=0, valor;
		cin >> tamanho;
		int vetor[tamanho];
			while(aux!=(tamanho)){
				valor=0;
				cin >> valor;
				vetor[aux]=valor;
				aux++;
			}
			cout << reformulacao(vetor, tamanho);
	return 0;
}

