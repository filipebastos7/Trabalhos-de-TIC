#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main () {
	setlocale(LC_ALL,"portuguese");

	int N, inverso, aux;
	
	printf("Digite um valor de 5 d�gitos: ");
	scanf("%d", &N);
	
	inverso = 0; 
	aux = N;
	
	while (aux > 0) 
	{
		inverso = (inverso*10) + (aux % 10);
		aux = aux / 10;
	}
		
	if (N == inverso) 
	printf("\n\nO %d � um n�mero pal�ndromo.\n\n", N);
	else printf("\n\nO %d N�o � um n�mero pal�ndromo.\n\n", N);
	
	system("Pause");
	return 0;

}
