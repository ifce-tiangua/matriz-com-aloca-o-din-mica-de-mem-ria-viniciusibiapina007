#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col; // linhas e colunas
    scanf("%d", &lin);
    scanf("%d", &col);
    
    int** matriz = (int**) malloc(lin * sizeof(int*));
    
    for(int l = 0; l < lin; l++){
       
       matriz[l] = (int*) malloc(col * sizeof(int));
       
       for(int c = 0; c < col; c++){
            
            scanf("%d", &matriz[l][c]);
       }
    }
    
    if(lin == 0 || col == 0){
        printf("[matriz vazia]");
    }
    else{
        for(int l = 0; l < lin; l++){
            
           for(int c = 0; c < col; c++){
               printf("%d", matriz[l][c]);
               if(c<col-1)
                printf(" ");
               
            }

            printf("\n");
        }
    }
    
    
    for(int l = 0; l < lin; l++){
       
       free(matriz[l]);
    }
    free(matriz);
    
    return 0;
}
