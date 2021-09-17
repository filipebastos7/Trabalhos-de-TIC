#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float Aumento, Sal_Func, Novo_Sal;
	printf("Insira o valor do salário de um funcionário: ");
	scanf("%f",&Sal_Func);
	
	printf("Insira o valor do percentual do aumento salário do funcionário: ");
	scanf("%f",&Aumento);
	
	Novo_Sal= (Sal_Func*(Aumento/100)+Sal_Func);
	
	printf("O novo salário é de %.2f Kzs", Novo_Sal);
	system("Pause");
	return 0;
}
