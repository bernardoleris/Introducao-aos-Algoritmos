#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int n1, n2;
  int contador=0;
  cin >> n1 >> n2;
  while (n1>0){
    n1=n1-n2;
    contador++;
  }
  if(n1==0){
    cout << contador;
  }else{
    cout << contador-1;
  }
return 0;
}




