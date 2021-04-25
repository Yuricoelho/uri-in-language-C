#include <stdio.h>

int main(){
	double volumeEsfera, pi = 3.14159, raio;
	
	scanf("%lf", &raio);
	
	volumeEsfera = (4/3.0) * pi * raio * raio * raio;	
	
	printf("VOLUME = %.3lf\n", volumeEsfera);	
return 0;	
}
