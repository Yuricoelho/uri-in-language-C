#include <stdio.h>

int main(){
	int tempoGasto, vMedia; 
	double distanciaPercorrida, litrosNecessarios;
	
	scanf("%d", &tempoGasto);
	scanf("%d", &vMedia);
	
	distanciaPercorrida = tempoGasto * vMedia;
	
	litrosNecessarios = distanciaPercorrida / 12;
	
	printf("%.3lf\n", litrosNecessarios);
return 0;	
}
