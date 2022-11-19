#include <iostream>
#include <cmath>
using namespace std;

float calculadora_distancia(float pizzaria, float pizzaria){
	int distancia;
	for(int i=0; i<totalclientes; i++){
		distancia_vet[i]=sqrt(pow((pizza_x-vetor[i].cliente_x),2) + pow((pizza_y-vetor[i].cliente_y),2));
	}
	return distancia;
	


void insertion_sort(int vetor[], int tam){
    int valor_pivo, j;
    for (int i=1; i<tam; i++) {
   	 valor_pivo=vetor[i];
   	 j=i-1;
   	 while((j>=0) and (valor_pivo<vetor[j])){
   		 vetor[j+1]=vetor[j];
   		 j--;
   	 }
   	 vetor[j+1]=valor_pivo;
    }
}

struct pizzaria{
	string nome;
	float cliente_x, cliente_y;
	float valor;
};

int main(){
	int totalclientes, pizza_x, pizza_y, N;
	cin >> N >> pizza_x >> pizza_y >> totalclientes;
	pizzaria vetor[totalclientes];
	
	for(int i=0; i<totalclientes; i++){
		cin >> vetor[i].nome >> vetor[i].cliente_x >> vetor[i].cliente_y >> vetor[i].valor;
	}
	
	insertion_sort(distancia_vet, totalclientes);
	
	
	
	
	
	
	return 0;
}



