#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i, Num_Sal_min;
	float Sal_min, Sal_Func;
	printf("Insira o valor do sal�rio m�nimo: ");
	scanf("%f",&Sal_min);
	
	printf("Insira o valor do sal�rio de um funcion�rio: ");
	scanf("%f",&Sal_Func);
	
	i= Sal_Func/Sal_min;
	printf("Este funcion�rio recebe %d sal�rios m�nimos", i);
	system("Pause");	
	return 0;
}
