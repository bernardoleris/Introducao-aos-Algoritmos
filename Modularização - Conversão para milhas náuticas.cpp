#include <iostream>
using namespace std;

float paramilhas(float distancia_km){
	float milhas;
	    milhas=(distancia_km/1.852);
	    return milhas;
}

float previsao(float velocidade_km, float horas, float milhas){
	float deslocamento;
	    deslocamento=paramilhas((velocidade_km*horas)+milhas);
	    return deslocamento;
}

int main(){
    float distancia_km, velocidade_km, horas;
    cin >> distancia_km;
    while(distancia_km>=(0)){
		if(distancia_km>=0){
		    cin >> velocidade_km >> horas;
		    cout << paramilhas(distancia_km) << " " << previsao(velocidade_km, horas, distancia_km) << endl;
		}
		cin >> distancia_km; 
	}
return 0;
}
