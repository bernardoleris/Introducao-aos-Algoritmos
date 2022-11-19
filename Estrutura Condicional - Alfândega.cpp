#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int codigo, origem; //entrada
  float pesokg; //entrada
  float pesogramas, precobruto, imposto, precototal, precocomimposto; //saida
   
  pesogramas=(pesokg*1000);
  cout << pesogramas << "\n";
  if(codigo>=1 and codigo<=4){
	 precobruto=(10*pesogramas);
	 cout << precobruto << "\n";
  }else if(codigo>=5 and codigo<=7){
	 precobruto=(25*pesogramas);
	 cout << precobruto << "\n";
  }else if(codigo>=8 and codigo<=10){
	 precobruto=(35*pesogramas);
	 cout << precobruto << "\n";}
  
  if(origem==1){
	 imposto=(0.00);
	 cout << imposto << "\n";
  }else if(origem==2){
	 imposto=(0.15);
	 precocomimposto=(precobruto*imposto);
	 cout << precocomimposto << "\n";
  }else if(origem==3){
	 imposto=(0.25);
	 precocomimposto=(precobruto*imposto);
	 cout << precocomimposto << "\n";}
  
  precototal=((precobruto)+precobruto*imposto);
  cout << precototal << endl;
return 0;
}


