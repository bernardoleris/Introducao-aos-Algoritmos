#include <iostream>
using namespace std;

	double soma(int n_parcelas){
		int aux=1;
		double somatotal=1;
			while(aux!=n_parcelas){
				somatotal=(somatotal+(aux*(aux+1)/(aux+3)));
				aux++;
			}
			return somatotal;
	}
	
	int main(){
		int parcelas;
		cin >> parcelas;
		cout << soma(parcelas);
		return 0;
	}
