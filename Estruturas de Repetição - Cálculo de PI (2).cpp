#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int precisao, cont=1;
    double x, raiz, pi;
    x=sqrt(2);
    raiz=x;
    cin >> precisao;
    while(cont<precisao){
	    x=sqrt(2+x);
	    raiz=raiz*x;
	    cont++;}
    pi=(pow(2,precisao + 1))/raiz;
    cout << pi;


}
		
