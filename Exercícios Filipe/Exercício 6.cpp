#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float C_E, P_C,saida;
	
	printf("Insira o valor do espet�culo teatral: ");
	scanf("%f",&C_E);
	
	printf("\nInsira o valor do pre�o do convite: ");
	scanf("%f",&P_C);
	
	saida=C_E/P_C;
   
    printf("\nPara que o custo do espet�culo seja alcan�ado devem ser vendidos pelo menos %.0f convites", saida);
	system("Pause");
	return 0;
}
