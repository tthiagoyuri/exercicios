#include<stdio.h>

 int main ()
 {
char nome[25];
char sexo;
float salario;
int matricula, horasTrabalhadas, horasSemanais;

printf("Ola, digite seu nome \n");
scanf("%s", &nome);

printf("Digete seu sexo M para masculino ou F para feminino \n");
scanf("%s", &sexo);

printf("Agora digite o seu numero de matricula \n");
scanf("%d", &matricula);

printf("Digete quantas horas voce trabalha por semana \n");
scanf("%d", &horasSemanais);

horasTrabalhadas = horasSemanais * 4;
salario = 1250 / horasTrabalhadas;

printf("Nome do funcionario: %s \n", &nome);
printf("Sexo do funcionario: %c \n", sexo);
printf("Matricula: %d \n", matricula);
printf("Horas trabalhadas mensalmente: %d \n", horasTrabalhadas);
printf("Salario recibido por hora trabalhada: %.2f reais \n", salario);


}
