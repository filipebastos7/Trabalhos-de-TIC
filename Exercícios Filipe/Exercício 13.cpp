#include <stdio.h>
#include<stdlib.h>
int main(){

	int S=0;
	printf("3");
	for(int i=6; i<500; i++)
	{
		if (i % 3 == 0)
		{
			S += i;
			printf(" + %d",i);
		}
	}
	printf(" = %d", S+3);
	system("Pause");	
	return 0;
}

