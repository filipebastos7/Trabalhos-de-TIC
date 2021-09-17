#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main()
{
    setlocale(LC_ALL,"portuguese");
    float a, b, c, delta, x1, x2;
 
    printf("Digite o valor de a: "); 
	scanf("%f", &a);
    printf("Digite o valor de b: "); 
	scanf("%f", &b);
    printf("Digite o valor de c: "); 
	scanf("%f", &c);
 
    system("cls");
    printf("\nf(x) = %.0fx² + %.0fx + %.0f\n", a, b, c);
 
    delta = b*b - 4 * a * c;
 
    if(delta < 0)
    {
        printf("\nDELTA = %.0f\nNão possui raízes reais!\n\n", delta);
    }
    else
    {
        if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\nDELTA = %.0f \nx' = x'' = %.2f\n\n", delta, x1);
        }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDELTA = %.0f \nx'   = %.2f\nx''  = %.2f\n\n", delta, x1, x2);
        }
    }
 
    system("pause");
    return 0;
}
