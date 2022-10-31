/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/ 

#include<stdio.h>

int main ()
{

float nota1, nota2, media; 
float pesoA, pesoB;

printf("Digite a nota1 \n");
scanf("%f", &nota1);

printf("Digite a nota2 \n");
scanf("%f", &nota2);

pesoA = nota1 * 3.5;
pesoB = nota2 * 7.5;
media = (pesoA + pesoB) / 11; 

printf("A media do aluno e %.2f \n", media);

}
