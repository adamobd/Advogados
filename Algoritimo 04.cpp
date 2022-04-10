//faça um programa que receba o salário de um funcinoário, calcule e mostre o novo salário
//sabendo que este sofreu um aumento de 25%

#include <stdio.h>
int main(){
	
	float salario, novoSalario;
	
	printf("Digite o valor do salario:\n");
	scanf("%f%*c",&salario);
	novoSalario=salario+(salario/4);
	printf("Seu novo salario é:%.2f",novoSalario);
	return 0;
	
	//poderia ser salario*25/100
}
