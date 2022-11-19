#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  float saldo, credito;
  cin >> saldo;
  if (saldo<=0){
  cout << saldo << "\n" << "0" << endl;
  }
  else if (saldo>0 and saldo<200){
  credito=(saldo*0.10);
  cout << saldo << "\n" << credito << endl;
 } else if (saldo>=200 and saldo<400){
  credito=(saldo*0.15);
  cout << saldo << "\n" << credito << endl;
} else if (saldo>=400 and saldo<800){
  credito=(saldo*0.20);
  cout << saldo << "\n" << credito << endl;
} else if (saldo>=800 and saldo<1600){
  credito=(saldo*0.25);
  cout << saldo << "\n" << credito << endl;
} else if (saldo>1600){
  credito=(saldo*0.30);
  cout << saldo << "\n" << credito << endl;}
 
return 0;
}

