#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	float L, A;
	printf("Insira o valor de um dos lados do quadrado: ");
	scanf("%f",&L);
	
	A= L*L;
	
	printf("A �rea do quadrado �: %.2f", A);
	system("Pause");	
	return 0;
}
