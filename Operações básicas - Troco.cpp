#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int valorentregue, totalcompra, troco;
	cin >> valorentregue >> totalcompra;
	troco=(valorentregue-totalcompra);
	int vinte=(troco/20);
	int dez=(troco%20)/10;
	int cinco=(troco%20%10)/5;
	int dois=(troco%20%10%5)/2;
	int um=(troco%20%10%5%2)/1;
	cout << vinte << "\n" << dez << "\n" << cinco << "\n" << dois << "\n" << um << endl;
	
	return 0;
}
