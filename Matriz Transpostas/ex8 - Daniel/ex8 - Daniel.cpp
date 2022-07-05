#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "PORTUGUESE");
	int matA[2][3], matB[3][2];
	for (int i = 0; i < 2; i++) {
		for (int y = 0; y < 3; y++) {
			printf("\n\n\tDigite os números da linha %d: ", i + 1);
			scanf_s("%d", &matA[i][y]);
		}
	}
	printf("\n\n\n");
	for (int i = 0; i < 2; i++) {
		for (int y = 0; y < 3; y++) {
			matB[y][i] = matA[i][y];
			printf("%d ", matA[i][y]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for (int i = 0; i < 3; i++) {
		for (int y = 0; y < 2; y++) {
			printf("%d ", matB[i][y]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}