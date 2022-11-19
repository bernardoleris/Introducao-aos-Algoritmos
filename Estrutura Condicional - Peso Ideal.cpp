#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    char sexo;
    float altura, peso;
    
    cin >> sexo >> altura;
    if (sexo=='M'){
		peso=((72.7 * altura) - 58);
		cout << peso << endl;
	}else if(sexo=='F'){
		peso=((62.1 * altura) - 44.7);
		cout << peso << endl;
	}
return 0;
}

