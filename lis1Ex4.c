#include<stdio.h>

int main()
{

int n1, n2, quociente, resto;

printf("Digite o primeiro numero: \n");
scanf("%d", &n1);

printf("digite o valor do segundo numero: \n");
scanf("%d", &n2);

quociente = n1 / n2;
printf("Resultado da divisao inteira de %d / %d = %d \n", n1, n2, quociente);

resto = n1 % 2;
printf("Resto da divisao e = %d \n", resto);

}
