#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  string cor1, cor2;
  cin >> cor1 >> cor2;
  
  if(cor1==cor2){
	 cout << cor1 << endl;
	 }else if(cor1=="vermelho" and cor2=="azul"){
		 cout <<"violeta"<<endl;
	 }else if(cor1=="azul" and cor2=="vermelho"){
		 cout <<"violeta"<<endl;
     
     }else if(cor1=="azul" and cor2=="amarelo"){
		 cout <<"verde"<<endl;
     }else if(cor1=="amarelo" and cor2=="azul"){
		 cout <<"verde"<<endl;
     
     }else if(cor1=="amarelo" and cor2=="vermelho"){
		 cout <<"laranja"<<endl;
     }else if(cor1=="vermelho" and cor2=="amarelo"){
		 cout <<"laranja"<<endl;}


return 0;
}

