#include <iostream>
using namespace std;

	int H(int x){
		if(x==0){
			return 0;
		}
		else if(x>0){
			return H(x-1)+F(x-1);
		}
	}
	
	int F(int x){
		int testador;
		testador=x%2;
		if(x==1){
			return 1;
		}
		else if(x>0 and testador==0){
			return 2*H(x)+F(x-1);
		}
		else if(x>0 and testador!=0)
			return 2*H(x)-F(x-1);
	}
	
	int main(){
		int numero;
		cin >> numero;
		cout << F(numero);
		
		
		return 0;
	}
