#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int Num, SP = 0, SI = 0, QP = 0, QI = 0;
	float MP, MI;
	
	for(int i = 1; i <= 10; i++)
	{
		printf("Informe o %dº número: ", i);
		scanf("%d", &Num);
		
		if(Num % 2 == 0)
			SP += Num, QP++;
		
		else
			SI += Num, QI++;
	}
	
	MP = (SP / QP);
	MI = (SI / QI);
	
	printf("\nA média dos pares é: %.2f\n", MP);
	printf("A média dos ímpares é: %.2f\n", MI);
	system("Pause");	
	return 0;
}
