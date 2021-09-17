#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float C_E, P_C,saida;
	
	printf("Insira o valor do espetáculo teatral: ");
	scanf("%f",&C_E);
	
	printf("\nInsira o valor do preço do convite: ");
	scanf("%f",&P_C);
	
	saida=C_E/P_C;
   
    printf("\nPara que o custo do espetáculo seja alcançado devem ser vendidos pelo menos %.0f convites", saida);
	system("Pause");
	return 0;
}
