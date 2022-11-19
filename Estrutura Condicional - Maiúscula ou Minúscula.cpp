#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  float rendimento, investimento, total;
  cin >> rendimento >> investimento;
  
  if((rendimento)==1){
  total=(investimento+investimento*0.005);
  cout << total << endl;
  }else if((rendimento)==2){
  total=((investimento+investimento*0.03)-30);
  cout << total << endl;}
return 0;
}

