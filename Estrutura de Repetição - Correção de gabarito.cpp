#include <iostream>
using namespace std;

int main(){
	int quantidade_questoes, quantidade_alternativas=0, testador_questoes=0, aux=0, aux2, resposta, testador;
		cin >> quantidade_questoes;
		if(quantidade_questoes>=1 and quantidade_questoes<=255){//tentativa de limitar
		while((testador_questoes)!=(quantidade_questoes)){
			testador=0;
			aux2=0;
			quantidade_alternativas=0;
			aux=0;
			while((quantidade_alternativas!=5)){
				cin >> resposta;
				if(resposta>=0 and resposta<=255){ //tentativa de limitar
				aux++;
				if(resposta<=127){
					aux2=aux;
					testador++;
				}
			    quantidade_alternativas++;}
				}
			    if(testador!=1){
					cout << "*" << endl;
			    }
			    else if(aux2==1){
					cout << "A" << endl;
			    }
		        else if(aux2==2){
					cout << "B" << endl;
		        }
		        else if(aux2==3){
					cout << "C" << endl;
			    }
			    else if(aux2==4){
					cout << "D" << endl;
			    }
				else if(aux2==5){
					cout << "E" << endl;
				}
				else if(aux2==0){
					cout << "*" << endl;}
				
			
			testador_questoes++;}
		}
		

return 0;
}












