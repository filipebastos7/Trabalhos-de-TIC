#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float Sal_min, Qwatt, Quant_Qwatt, VPR = 0.0, Des = 0.0; 
	
	printf("Insira o valor do salário mínimo: ");
	scanf("%f", &Sal_min);
	
	printf("\nInsira a quantidade de quilowatts consumida pela residência: ");
	scanf("%f", & Quant_Qwatt);
	
	Qwatt = Sal_min/5;
	VPR = Quant_Qwatt * Qwatt;
	Des = VPR - (VPR *0.15);
	
	printf("\nValor de cada Quilowatt: %.2f", Qwatt);	
	printf("\nValor a ser pago pela residência: %.2f", VPR);	
	printf("\nValor a ser pago com o desconto: %.2f", Des);
	system("Pause");	
	return 0;
}
