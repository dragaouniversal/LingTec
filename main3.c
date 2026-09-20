#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int caixa(int VALORT){
	int nota100, nota50, nota10, nota5, nota2, nota1;
	
	nota100 = VALORT / 100;
	VALORT = VALORT%100;
	
	nota50 = VALORT/50;
	VALORT = VALORT%50;
	
	nota10 = VALORT/10;
	VALORT = VALORT%10;
	
	nota5 = VALORT/5;
	VALORT = VALORT%5;
	
	nota2 = VALORT/2;
	VALORT = VALORT%2;
	
	nota1 = VALORT/1;
	VALORT = VALORT%1;
	
	printf("100:%d, 50:%d, 10:%d, 5:%d, 2:%d, 1:%d", nota100, nota50, nota10, nota5, nota2, nota1);
	return 0;
}
double INSS(double bruto){
	double descontoINSS;
	if (bruto < 1412.01){
		descontoINSS = bruto *0.075;
	}
	else if(bruto > 1412.00 && bruto <2666.69){
		descontoINSS = bruto *0.09;
	}
	else if(bruto > 2666.69 && bruto < 4000.04){
		descontoINSS = bruto * 0.12;
	}
	else{
		descontoINSS = bruto * 0.14;
	}
	return descontoINSS;
}
double IRPF(double salariobase){
	double descontoIRPF;
	
	
	if(salariobase < 2259.21){
		descontoIRPF = salariobase*0;
	}
	else if(salariobase > 2259.21 && salariobase < 2826.66){
		descontoIRPF = (salariobase * 0.075) - 169.44;
	}
	else if(salariobase > 2826.66 && salariobase < 3751.06){
		descontoIRPF = (salariobase * 0.15) - 381.44;
	}
	else if(salariobase > 3751.06 && salariobase < 4664.69){
		descontoIRPF = (salariobase * 0.225) - 662.77;
	}
	else{
		descontoIRPF = (salariobase * 0.275) - 896.00;	
	}
	
	return descontoIRPF;
}


int main(int argc, char *argv[]) {
	int valor;
	double salarioliquido, salario, salariobase, descontoINSS, descontoIRPF;
	
	
	printf("\nInsira o valor total em R$ ");
	scanf("%d", &valor);
	caixa(valor);	

	printf("\nInsira seu salario bruto: R$");
	scanf("%lf", &salario);

	descontoINSS = INSS(salario);

	salariobase = salario - descontoINSS;

	descontoIRPF = IRPF(salariobase);

	salarioliquido = salario - descontoINSS - descontoIRPF;
	
	descontoINSS = INSS(salario);
	
	printf("\nValor do INSS: %.2lf", descontoINSS);
	printf("\nValor do IRPF: %.2lf", descontoIRPF);
	printf("\nSalario liquido: %.2lf", salarioliquido);
	return 0;
}


