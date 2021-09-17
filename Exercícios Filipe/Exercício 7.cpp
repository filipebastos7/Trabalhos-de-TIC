#include<stdio.h>
#include<stdlib.h>		
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float Preco_Fab, Percent_lucro, Percent_Imp, Lucro, valorImp, PrecoFinal;
		
	printf("Insira o preço de fábrica do veículo: ");
	scanf("%f",&Preco_Fab);
	
	printf("Insira o percentual de lucro do distribuidor: ");
	scanf("%f", &Percent_lucro);
	
	printf("Insira o percentual de impostos: ");
	scanf("%f",&Percent_Imp);
	
	Lucro = (Preco_Fab * Percent_lucro) / 100;
	
	valorImp = (Percent_Imp * Preco_Fab) / 100;
	
	PrecoFinal = Preco_Fab + Lucro + valorImp;
	
	system("Cls");
	printf("\n\t\t*************************************************");
	printf("\n\t\t*\tO lucro do distribuidor é de: %.2f      *", Lucro);
	printf("\n\t\t*\tO valor correspondente aos é de é %.2f  *", valorImp);
	printf("\n\t\t*\tO preço final do veículo é %.2f         *", PrecoFinal);
	printf("\n\t\t*************************************************");
	system("Pause");
	return 0; 
}
