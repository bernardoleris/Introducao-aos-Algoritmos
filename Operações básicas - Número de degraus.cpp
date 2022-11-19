#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
float alturaCM, alturaM, degrau;

cin >> alturaCM >> alturaM;
degrau=(alturaM*100)/(alturaCM);
cout << ceil(degrau) << endl;

return 0;
}
