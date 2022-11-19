#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 	int valorobtido;
	cin >> valorobtido;

    int cem=(valorobtido/100);
    int cinquenta=((valorobtido%100)/50);
	int vinte=(valorobtido%100%50)/20;
	int dez=(valorobtido%100%50%20)/10;
	int cinco=(valorobtido%100%50%20%10)/5;
	int dois=(valorobtido%100%50%20%10%5)/2;
	int um=(valorobtido%100%50%20%10%5%2)/1;
	
	cout << cem << "\n" << cinquenta << "\n" << vinte << "\n" << dez << "\n" << cinco << "\n" << dois << "\n" << um << endl;

    return 0;
}

