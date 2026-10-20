#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ordem(){

printf("Exercicio 1:\n")
int main(){}
	int opcao;
	printf("Escolha um exercicio: 1-10: \n");
	scanf("%d", &opcao);
	int num[100], i;
	for(i=0; i<100; i++){
		printf("Digite o numero %d: \n", i+1);
		scanf("%d", &num[i]);
	}
	for(i=99; i>=0; i--){
		printf("Numero %d: %d\n", i-1);
	}
}
int cient(){
	double a;
	int exp = 0;
	
	printf("\nDigite um numero: ");
	scanf("%lf", &a);
	
	while (a >= 10){
		a = a/10;
		exp++;
}
int bits(){
	printf("Exercicio 3: \n")
	int num, bits[7], i = 0;
	
	printf("Digite um numero 1-64\n");
	scanf("%d", &num);
	
	while (num>0){
		bits[i] = num%2;
		num = num / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--){
		printf("%d", bits[i]);
	}
}
int exercicio_6(){
	float x1, y1, x2, y2, d;
	
	printf("\nColoque as coordenadas do primeiro ponto:");
	scanf("%f%f", &x1, &y1);
	
	printf("\nColoque as coordenadas do segundo ponto: ");
	scanf("%f%f", &x2, &y2);
	
	d = sqrt(pow(x2- x1, 2) + pow(y2-y1, 2));
	
	printf("\nA distancia dos dois pontos e de: %f", d);
}
	
int main(){
	
}

