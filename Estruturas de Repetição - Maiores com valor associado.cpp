#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int matricula, maiormatricula1, maiormatricula2;
float nota, maiornota1=0, maiornota2=0;
cin >> matricula;
while (matricula!=0){
	cin >> nota;
	if (nota>maiornota1){
		maiornota2=maiornota1;
		maiormatricula2=maiormatricula1;
		maiornota1=nota;
		maiormatricula1=matricula;
	}else if(nota>maiornota2){
		maiornota2=nota;
		maiormatricula2=matricula;}
	    cin >> matricula;
}
cout << maiormatricula1 << " " << maiornota1 << "\n"<< maiormatricula2  << " " << maiornota2;

return 0;
}


