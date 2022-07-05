#include <stdio.h>
#include <stdlib.h>

int Pesquisar(int vet[5], int valor);

int main() {

	int vet[] = {9,7,2,16,4};
	int n;

	printf("* PESQUISA LINEAR NO VETOR *\n");
	for (int i = 0; i < 5; i++) {
		printf("%d , ", vet[i]);
	}
	printf("\n\nDigite um numero: ");
	scanf_s("%d", &n);
	Pesquisar(vet, n);
	return 0;
}

int Pesquisar(int vet[5], int valor) {
	for (int i = 0; i < 5; i++) {
		if (vet[i] == valor) {
			return printf("\n\n---> Encontrado na posicao %d , vet[%d]\n\n", i+1, i);
		}
	}
	return printf("\n\n---> ERRO ! Numero nao encontrado.\n\n");
}