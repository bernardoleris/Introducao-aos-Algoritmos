#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
float homens, alem, caravelas;

cin >> homens;
alem=(homens-1000);
caravelas=(alem/80);
cout << ceil (caravelas) << endl;

return 0;
}
