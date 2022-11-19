#include <iostream>
using namespace std;

int main()
{
int n_linhas, cont1=0, cont2=0;
bool estilo=true;
cin >> n_linhas;
while(cont1<n_linhas){
	while(cont2<n_linhas){
		if(estilo==true){
			cout << ".";
			estilo=false;
		}else{
		    cout << "#";
			estilo=true;}
		cont2++;}
		cout << endl;
		cont1++;
		cont2=0;
		if(n_linhas%2==0){
			if(estilo==true){
			   estilo=false;
			}else
			{
				estilo=true;}
		    }
		    }	
		    		
return 0;
}








