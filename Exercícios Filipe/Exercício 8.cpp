#include<stdio.h>
#include<stdlib.h>	
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int Num_Horas;
	float Sal_min, Valor_Hora, Sal_Bruto, Imp, Sal_Final;
		
	printf("Insira o n�mero de horas trabalhadas: ");
	scanf("%d", &Num_Horas);
	printf("Insira o valor do sal�rio m�nimo: ");
	scanf("%f",&Sal_min);
	
	Valor_Hora = Sal_min / 2;
	Sal_Bruto = Valor_Hora * Num_Horas;
	Imp = (3 * Sal_Bruto)/100;
	Sal_Final = Sal_Bruto - Imp;
	
	printf("\nValor por hora: %.2f", Valor_Hora);
	printf("\nSal�rio bruto: %.2f", Sal_Bruto);
	printf("\nImposto: %.2f", Imp);
	printf("\nSal�rio a receber: %.2f", Sal_Final);
	system("Pause");
	return 0;
}
