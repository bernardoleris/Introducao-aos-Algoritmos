#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 float x1, y1, x2, y2, M, Q;
    cin >> x1 >> y1 >> x2 >> y2;
    M= (y2-y1)/(x2-x1);
    Q= y1-(M*x1);
    
    cout << M << "\n" << Q << endl;

    return 0;
}


