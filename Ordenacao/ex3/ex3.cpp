#include <stdio.h>
#include <stdlib.h>

int main() {
	float num[5], aux = 0;
	int i, x;
	
	printf("\t======================");
	printf("\n\tORDENACAO DE 5 NUMEROS");
	printf("\n\t======================\n\n");

	for (i = 0; i < 5; i++) {
		printf("\tDigite um numero: ");
		scanf_s("%f", &num[i]);
	}

	for (i = 0; i < 5; i++) {
		for (int x = 0; x < 5 - 1; x++) {
			if (num[x] > num[x + 1]) {
				aux = num[x + 1];
				num[x + 1] = num[x];
				num[x] = aux;
			}
		}
	}
	printf("\n\nORDEM CRESCENTE:\n");

	for (i = 0; i < 5; i++) {
		printf("\n%d-\t%.2f", i+1, num[i]);
	}
	printf("\n\n");

	system("PAUSE");
	return 0;
}