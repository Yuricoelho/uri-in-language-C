#include <stdio.h>

int main(){
	int codigoPeca1, numPecas1, codigoPeca2, numPecas2; 
	double valorUnitarioPeca1, valorUnitarioPeca2, valorASerPago;
	 
	scanf("%d %d %lf", &codigoPeca1, &numPecas1, &valorUnitarioPeca1);
	scanf("%d %d %lf", &codigoPeca2, &numPecas2, &valorUnitarioPeca2);
	
	valorASerPago = (numPecas1 * valorUnitarioPeca1) + (numPecas2 * valorUnitarioPeca2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valorASerPago);
		
return 0;	
}
