#include <iostream>
#include <cmath>
using namespace std;

int mdc(int A, int B){
	int resto;
    while(B!=0){
		resto=A%B;
		A=B;
		B=resto;}
	return A;
	}
	
int main(){
	int numerador, denominador, A, B;
	cin >> numerador >> denominador;
	A=numerador;
	B=denominador;
	cout << numerador/mdc(A,B) << "\n" << denominador/mdc(A,B);
return 0;
}	




