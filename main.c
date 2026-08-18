#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, sucessor, antecessor;
	
	printf("Insira um numero:\n");
	scanf("%d", &n);

	
	printf("O sucessor de %d é: %d. E o seu antecessor é: %d\n", n, n+1, n-1);

	
	int a,b,c, maiortemp, maior;
	
	printf("Insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maiortemp = ((a+b+ abs(a-b))/2);
	maior = ((c+maiortemp+ abs(maiortemp-c))/2);
	printf("O maior entre %d %d %d é: %d", a, b, c, maior);
	
	
	
	return 0;
}
