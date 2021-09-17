#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float altura, menor, maior;
	int cont = 1;
	
	menor = maior = 0.0;
		
	while(cont <= 15){
		printf("Informe a altura da %dª pessoa: ", cont);
		scanf("%f", &altura);
		
		if(cont == 1)
			menor = altura, maior = altura;
		
		else{
			if(altura < menor)
				menor = altura;
		
			if(altura > maior)
				maior = altura;
		}
		
		cont++;
	}
	
	printf("\nA menor altura é: %.2f\n", menor);
	printf("\nA maior altura é: %.2f\n", maior);
	system("Pause");	
	return 0;
}
