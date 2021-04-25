#include <stdio.h>

int main(){
	int numFunc, numHorasTrabalhadas;
	double valorPorHora, salFunc;
	
	scanf("%d", &numFunc);
	scanf("%d", &numHorasTrabalhadas);
	scanf("%lf", &valorPorHora);
	
	salFunc = numHorasTrabalhadas * valorPorHora;
	
	printf("NUMBER = %d\n", numFunc);
	printf("SALARY = U$ %.2lf\n", salFunc);
return 0;	
}
