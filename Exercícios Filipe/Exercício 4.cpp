#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float Sal_Func, Novo_Sal;
	
	printf("Digite o salário do funcionário:");
	scanf("%f",&Sal_Func);
	
	Novo_Sal=+Sal_Func+(Sal_Func*0.25);
	
	printf("\nCom o aumento de 25 porcento o novo é salário é de: %.2f Kzs", Novo_Sal);
	system("Pause");
	return 0;
}
