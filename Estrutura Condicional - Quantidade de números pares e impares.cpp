#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int numero;
cin >> numero;
int n1, n2, n3, n4, n5;
int par=0;
int impar=0;
n1=numero/10000;
n2=(numero/1000)%10;
n3=(numero/100)%100;
n4=(numero%100)/10;
n5=numero%10;

if(n1%2==0){
	par++;
	}else if (n1%2!=0){
	impar++;}
	
	if(n2%2==0){
	par++;}
	else if(n2%2!=0){
	impar++;}
	
	if(n3%2==0){
	par++;
	}else if (n3%2!=0){
	impar++;}
	
	if(n4%2==0){
	par++;
	}else if (n4%2!=0){
    impar++;}
	
	if(n5%2==0){
	par++;
	}else if(n5%2!=0){
	impar++;
	}
 cout << par << "\n" << impar;
return 0;
}



