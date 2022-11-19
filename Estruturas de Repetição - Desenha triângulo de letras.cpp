#include <iostream>
using namespace std;
int main()
{
	int num, cont1=0, cont2=0;
	char letra=97;
	
	cin>>num;
	
	while (cont1<=num){
		while (cont2<cont1){
		cout<<char(letra+cont2)<<" ";
		cont2++;
	}
	if (cont1!=0){
		cout<<endl;
	}
	cont1++;
	cont2=0;
}
	
return 0;
}
