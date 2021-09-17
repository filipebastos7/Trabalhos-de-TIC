#include <stdio.h>
#include<stdlib.h>
int main(){
	int N1=0, N2=1, F;
	
	F = N1 + N2; 
	
	printf("%i %i %i ", N1, N2, F);
	
	for(int i=4; i <= 20; i++){
		N1=N2;
		N2=F;
		F=N1+N2;
		
		printf("%i ", F);
	}
	
	printf("\n");
	system("Pause");		
	return 0;
}
