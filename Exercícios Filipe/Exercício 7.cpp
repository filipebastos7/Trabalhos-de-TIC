#include<stdio.h>
#include<stdlib.h>		
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float Preco_Fab, Percent_lucro, Percent_Imp, Lucro, valorImp, PrecoFinal;
		
	printf("Insira o pre�o de f�brica do ve�culo: ");
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
	printf("\n\t\t*\tO lucro do distribuidor � de: %.2f      *", Lucro);
	printf("\n\t\t*\tO valor correspondente aos � de � %.2f  *", valorImp);
	printf("\n\t\t*\tO pre�o final do ve�culo � %.2f         *", PrecoFinal);
	printf("\n\t\t*************************************************");
	system("Pause");
	return 0; 
}
