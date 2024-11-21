#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
	scanf("%d", &lin);
	scanf("%d", &col);

	int **matriz = (int**) malloc(lin * sizeof(int*));
	
	if(lin == 0 || col == 0){ // se a linha ou a coluna é for 0, a matriz é nula
		matriz[0] = NULL;
	}
	else {
		for(int l = 0; l < lin; l++) {
			matriz[l] = (int*) malloc(col * sizeof(int));
		}
	}

	if(matriz[0] != NULL) {
		for(int l = 0; l < lin; l++) {
			for(int c = 0; c < col; c++) {
				scanf("%d", &matriz[l][c]);
			}
		}

		for(int l = 0; l < lin; l++) {
			for(int c = 0; c < col; c++) {
				if(c == col-1) {
					printf("%d", matriz[l][c]);
				}else{
					printf("%d ", matriz[l][c]);
				}
			}
			printf("\n");
		}
	} else {
		printf("[matriz vazia]\n");
	}

	for(int l = 0; l < lin; l++) {
		free(matriz[l]); // desalocar cada linha
	}
	free(matriz); // desalocar a matriz por completo
    
    return 0;
}
