#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EXERCICIO 1
int main(int argc, char *argv[]) {
	
	int A, B;
	
	printf("\nDigite dois numeros: ");
	scanf("%d%d", &A, &B);
	
	printf("\nA ordem inversa dos numeros digitados e: %d %d", B, A);
	return 0;
}*/
/*EXERCICIO 2
int main(){
	double a;
	int exp = 0;
	
	printf("\nDigite um numero: ");
	scanf("%lf", &a);
	
	while (a >= 10){
		a = a/10;
		exp++;
	}
	
	 while (a < 1){
        a = a * 10;
        exp--;
}
	printf("\n%lf x 10^%d", a, exp);
	return 0;
}*/
/*Exercicio 3
int main(){
	int num, bits[7], i = 0;
	
	printf("\nDigite um numero 1-64");
	scanf("%d", &num);
	
	while (num>0){
		bits[i] = num%2;
		num = num / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}*/
/*EXERCICIO 4
int main(){
	float salario, vendas, valorf, comissao;
	
	printf("\nQuanto e o seu salario? ");
	scanf("%f", &salario);
	
	printf("\nQuanto foi o valor total de vendas feitas no mes? ");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.15;
	valorf = comissao + salario;
	
	printf("O valor total no final e de: %.2f", valorf);
	
	return 0;
}*/

/*EXECICIO 5
int main(){
	float soma, media, produto, num1, num2, num3, num4;
	
	printf("\nDigite quatro numeros: ");
	scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
	
	soma = num1 + num2 + num3 + num4;
	media = soma / 4;
	produto = num1 * num2 * num3 * num4;
	
	printf("\n Soma = %f \nmedia = %f \nprodutorio = %f", soma, media, produto);
	return 0;
}*/

/*
int main(){
	int idade, anos, meses, dias, diasrest;
	
	printf("\nQual a sua idade em dias");
	scanf("%d", &idade);
	
	anos = idade / 365;
	idade = idade % 365;
	
	meses = idade / 30;
	dias = idade % 30;
	
	printf("\n%d ano(s)\n", anos);
    printf("\n%d mes(es)\n", meses);
    printf("\n%d dia(s)\n", dias);
	
	return 0;
}*/

/*EXERCICIO 7
int main(){
	float pi = 3.14159, R, volesfera;
	
	printf("\nDigite o valor do raio de sua esfera: ");
	scanf("%f", &R);
	
	volesfera = (4.0/3) * pi * pow(R, 3);
	
	printf("\nO volume da esfera é: %f", volesfera);
	return 0;
}*/

/*
int main(){
	float x1, y1, x2, y2, d;
	
	printf("\nColoque as coordenadas do primeiro ponto:");
	scanf("%f%f", &x1, &y1);
	
	printf("\nColoque as coordenadas do segundo ponto: ");
	scanf("%f%f", &x2, &y2);
	
	d = sqrt(pow(x2- x1, 2) + pow(y2-y1, 2));
	
	printf("\nA distancia dos dois pontos e de: %f", d);
	return 0;	
}*/
