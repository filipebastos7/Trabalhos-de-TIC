#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int fat, N;
		
	printf("Insira um número: ");
	scanf("%i", &N);
	
	fat = N;
	
	printf("\n%i!= %d", N, N);
	
	for(int i = N - 1; i >= 1; i--)
	{
		fat *= i;
		printf(" x %d",i);
	}
	
	
	printf(" = %i\n", fat);

	system("Pause");	
	return 0;
}
