#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b){
	if (a>b) return a;
	else return b;
}

int comparaMenor(int a, int b){
	if (a<b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int maior, menor, i;
	int valores[10];
	
	printf("\nVamos ler os valores: ");
	//for (inicialização; verificação; incremento)
	for(i=0; i<=9; i++){
		scanf("%d", &valores[i]);
	}
	
	maior = valores[0];
	for(i=1; i<=4; i+=2){
		int maiorTemp = comparaMaior(valores[i], valores[i+1]);
		maior = comparaMaior(maiorTemp, maior);
	}
	
	menor = valores[5];
	for(i=6; i<=9; i+=2){
		int menorTemp = comparaMenor(valores[i], valores[i+1]);
		menor = comparaMenor(menorTemp, menor);
	}
	
	printf("\n");
	printf("\nmaior |%d|", maior);
	
	printf("\n");
	printf("\nmenor |%d|", menor);
	
	/*for(i=9; i>=1; i--){
		scanf("%d", &valores[i]);
}*/
	return 0;
}
