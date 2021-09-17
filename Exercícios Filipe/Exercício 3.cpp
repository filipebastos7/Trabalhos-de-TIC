#include<stdio.h>
#include<stdlib.h>

main(){
	int ano_nasc, ano_actual, id_actual, id_futura;
	
	printf("Insira o ano actual: ");
	scanf("%d",&ano_actual);
	printf("Insira o ano de nascimento: ");
	scanf("%d",&ano_nasc);
	
	id_actual= ano_actual-ano_nasc;
	
	id_futura=2050-ano_nasc;
	
	printf("Idade da pessoa: %d \nIdade da pessoa em 2050: %d",id_actual, id_futura);
	system("Pause");
	return 0;
}
