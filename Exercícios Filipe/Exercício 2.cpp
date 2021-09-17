#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i, Num_Sal_min;
	float Sal_min, Sal_Func;
	printf("Insira o valor do salário mínimo: ");
	scanf("%f",&Sal_min);
	
	printf("Insira o valor do salário de um funcionário: ");
	scanf("%f",&Sal_Func);
	
	i= Sal_Func/Sal_min;
	printf("Este funcionário recebe %d salários mínimos", i);
	system("Pause");	
	return 0;
}
