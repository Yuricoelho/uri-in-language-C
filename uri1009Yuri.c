#include <stdio.h>
#include <string.h>

int main(){
	char nome[40];
	double salFixo, totalVendas, totalVendasMes;
	
	gets(nome);
	scanf("%lf", &salFixo);
	scanf("%lf", &totalVendasMes);
	
	totalVendas = salFixo + (totalVendasMes * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", totalVendas);
	
	
return 0;	
}
