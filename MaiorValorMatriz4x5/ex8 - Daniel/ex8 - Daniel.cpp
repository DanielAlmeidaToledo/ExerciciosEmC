#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "PORTUGUESE");
	int mat[4][5], maior, menor;
	for (int i = 0; i < 4; i++) {
		for (int y = 0; y < 5; y++) {
			printf("\n\n\tDigite os números da linha %d: ", i + 1);
			scanf_s("%d", &mat[i][y]);
		}
	}
	maior = mat[0][0];
	menor = mat[0][0];
	for (int i = 0; i < 4; i++) {
		for (int y = 0; y < 5; y++) {
			if (mat[i][y] > maior) {
				maior = mat[i][y];
			}
			else if (mat[i][y] < menor) {
				menor = mat[i][y];
			}
		}
	}
	printf("\n\n\nO maior número é %d, e o menor é %d !\n\n\n", maior, menor);
	system("PAUSE");
	return 0;
}