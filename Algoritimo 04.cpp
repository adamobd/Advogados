//fa�a um programa que receba o sal�rio de um funcino�rio, calcule e mostre o novo sal�rio
//sabendo que este sofreu um aumento de 25%

#include <stdio.h>
int main(){
	
	float salario, novoSalario;
	
	printf("Digite o valor do salario:\n");
	scanf("%f%*c",&salario);
	novoSalario=salario+(salario/4);
	printf("Seu novo salario �:%.2f",novoSalario);
	return 0;
	
	//poderia ser salario*25/100
}
