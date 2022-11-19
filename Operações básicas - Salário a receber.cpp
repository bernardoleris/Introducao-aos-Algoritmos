#include <iostream>
using namespace std;
int main ()
{
float salario,salarioB;
float horas, horasT, imposto;

cin >> salario >> horasT;
horas=(0.05*salario);
salarioB=(horas*horasT);
imposto=(0.23*salarioB);
salario=(salarioB-imposto);

cout << salario << endl;
return 0;
}
