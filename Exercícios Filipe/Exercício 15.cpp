#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int Num;
	do{
		printf("Digite um n�mero: ");
		scanf("%i",&Num);

		printf("O sucessor de %d � %d\n\n",Num,  Num+1);
	}while(Num>=0);
	system("Pause");	
	return 0;
}
