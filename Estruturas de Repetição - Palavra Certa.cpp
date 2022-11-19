#include <iostream>
#include <cmath>
using namespace std;

int main(){
char letra;
int aux=0, contA=0, contB=0;
while(aux!=(10)){
	cin >> letra;
	if(letra=='a'){
		contA++;
	}else if(letra=='b'){
		contB++;}
		aux++;}
		if(contA<contB){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;}
	   
return 0;
}




