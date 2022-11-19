#include <iostream>
using namespace std;

	int main(){
		int quantidadefichas, contfichas=0, contfemin=0, contmasc=0;
		float altura, alturatotal=0, maioraltura=0, menoraltura=3, somamasc=0, somafemin=0, mediatotal=0;
		char genero;
		cin >> quantidadefichas;
			while(contfichas!=quantidadefichas){
				cin >> altura >> genero;
				alturatotal=(alturatotal+altura);
					if(genero=='m'){
						somamasc=somamasc+altura;
						contmasc++;
					}
					else if(genero=='f'){
						somafemin=somafemin+altura;
						contfemin++;
					}
					if(altura>maioraltura){
						maioraltura=altura;
					}
					else if(altura<menoraltura){
						menoraltura=altura;
					}
				contfichas++;
			}		
				if(menoraltura==3){
					cout << maioraltura << "\n" << maioraltura<< "\n";
				}else{
					cout << maioraltura << "\n" << menoraltura << "\n";
				}
				mediatotal=alturatotal/quantidadefichas;
				if(contfemin>0){
					float mediafemin=0;
						mediafemin=somafemin/contfemin;
						cout << mediafemin << "\n";
				}else if(contfemin==0){
						cout << "erro" << "\n";
				}
				if(contmasc>0){
					float mediamasc=0;
						mediamasc=somamasc/contmasc;
						cout << mediamasc << "\n";
				}else if(contmasc==0){
						cout << "erro" << "\n";
				}
				
			cout << mediatotal << endl;
			
	return 0;
}












