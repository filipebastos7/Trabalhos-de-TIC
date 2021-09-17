#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float altura_Chico = 1.50, altura_Juca = 1.10;
	int cont;
	
	for(cont = 1; altura_Chico > altura_Juca; cont++)
	altura_Chico += 0.02, altura_Juca += 0.03;
	
	printf("Serão necessários %d anos para que o Juca seja maior que o Chico", cont);
	system("Pause");		
	return 0;
}

