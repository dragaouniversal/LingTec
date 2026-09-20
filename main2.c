#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCICIO1
int main(int argc, char *argv[]) {
	
	int idade, anonas, ano = 2026;
	
	printf("\nQuantos anos voce tem?");
	scanf("%d", &idade);
	
	anonas = ano - idade;
	
	printf("\nVoce nasceu no ano de %d", anonas);
	
	return 0;
}*/


/*EXERCICIO2
int main(){
	
	double velkm, velms;
	
	printf("Qual e a velocidade? (km/h)");
	scanf("%lf", &velkm);
	
	velms = velkm / 3.6;
	
	printf("Em m/s fica: %lf", velms);
	return 0;
}*/

/*EXERCICIO3
int main(){
	double real, dol;
	
	printf("\nQuantos reais voce tem? (cotacao = 5.50)");
	scanf("%lf", &real);
	
	dol = real / 5.50;
	
	printf("\nVoce tem %.2lf dolares quando convertido.", dol);
	return 0;
}*/

/*EXERCICIO4
int main(){
	
	double graus, F;
	
	printf("\nQuantos graus esta fazendo?");
	scanf("%lf", &graus);
	
	F = graus * (9.0/5.0) + 32.0;
	
	printf("\nEm Fahrenheit seria %.2lf", F);
	return 0;
}*/

/*EXERCIO5
int main(){
	float G, R, p = 3.141592;
	
	printf("\nquantos graus tem o angulo? ");
	scanf("%f", &G);
	
	R = G * (p/180);
	
	printf("\nConvertendo os graus, temos %f radianos", R);
	
	return 0;
}*/

/*EXERCICO 6
int main(){
	
	int A, suc, ante;
	
	printf("\nDigite um numero: ");
	scanf("%d", &A);
	
	suc = A + 1;
	ante = A -1;
	
	printf("O sucessor de %d e: %d. E o antecessor e: %d", A, suc, ante);
	return 0;
}*/

/*
EXERCICIO 7
int main(){
	
	double A, B, C;
	
	A = 780000 * 0.46;
	B = 780000 * 0.32;
	C = 780000 * 0.22;
	
	printf("O valor que o primeiro recebera e: %lf. o segundo sera: %lf. E o terceiro: %lf", A, B, C);
	return 0;
}*/

/*EXERCICIO 8
int main(){
	int seg, min, hora;
	
	printf("\nQuantos segundos dura o evento? ");
	scanf("%d", &seg);
	
	hora = seg/3600;
	seg = seg%3600;
	
	min = seg/60;
	seg = seg%60;
	
	printf("\nO tempo e: %d:%d:%d", hora, min, seg);
	
	return 0;
}*/

/*EXERCICIO 9
int main(){
	double kmh, L, H, D;
	
	printf("\nQuantas horas a viagem durou? ");
	scanf("%lf", &H);
	
	printf("\nQuanto foi a velocidade meida total? ");
	scanf("%lf", &kmh);
	
	L = H * kmh;
	D = L * 12;
	
	printf("A distancia percorrida e de: %.3lf. E foi utilizado %.3lf litros", D, L);
	
	return 0;
}*/

/*EXERCICIO 10
int main(){
	
	int a, b, c, maiortemp, maior;
	
	printf("\nDigite 3 valores: ");
	scanf("%d%d%d", &a, &b, &c);
	
	maiortemp = (a+b+abs(a-b))/2;
	maior = (c+maiortemp+abs(c-maiortemp))/2;
	
	printf("\n%d eh o maior", maior);
	return 0;
}*/
