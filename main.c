#include <stdio.h>
#include <stdlib.h>

int main() {
	int lin, col;
	scanf("%d", &lin);
	scanf("%d", &col); 

	int **matriz = (int**) malloc(lin * sizeof(int*));
	
	if(lin == 0 || col == 0) { 
		matriz[0] = NULL; // se a linha OU a coluna for 0, a matriz é nula
	}
	else {
		for(int i = 0; i < lin; i++) {
			matriz[i] = (int*) malloc(col * sizeof(int));
		}
	}
	
	if(matriz[0] != NULL) { // se a matrix NÃO for nula, preenchê-la e imprimi-la
		
		// Preenchendo a Matriz:
		for(int i = 0; i < lin; i++) {
			for(int j = 0; j < col; j++) {
				scanf("%d", &matriz[i][j]);
			}
		}

		// Imprimindo a Matriz:
		for(int i = 0; i < lin; i++) {
			for(int j = 0; j < col; j++) {
				if(j == col-1) {
					printf("%d", matriz[i][j]);
				}else{
					printf("%d ", matriz[i][j]);
				}
			}
			printf("\n");
		}
	} else {  // se a matriz for mula imprimir [matriz vazia]
		printf("[matriz vazia]\n");
	}

	for(int i = 0; i < lin; i++) {
		free(matriz[i]); // desaloca cada linha da matriz
	}
	free(matriz); // desaloca a matriz por completo
	return 0;
}
