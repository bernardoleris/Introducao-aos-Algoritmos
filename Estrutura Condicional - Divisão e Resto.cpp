#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int dividendo, divisor, quociente, resto;
    cin >> dividendo >> divisor;
    quociente= (dividendo/divisor);
    resto= (dividendo%divisor);

    if ((divisor)!=0)
    {
    cout << quociente << "\n" << resto;
    }
    else 
    {
    cout << "erro";
    } 

return 0;
}

