#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    scanf("%d", &lin);
    scanf("%d", &col);
    
    int** matriz = (int**) malloc(lin * sizeof(int*));
    
    for(int l = 0; l < lin; l++){
       
       matriz[l] = (int*) malloc(col * sizeof(int));
       
       for(int c = 0; c < col; c++){
            
            scanf("%d", &matriz[l][c]);
       }
    }
    
    for(int l = 0; l < lin; l++){
       
       for(int c = 0; c < col; c++){
           if(c==col-1)
            printf("%d", matriz[l][c]);
           else
            printf("%d ", matriz[l][c]);
       }
       printf("\n");
    }
    
    for(int l = 0; l < lin; l++){
       
       free(matriz[l]);
    }
    free(matriz);
    
    return 0;
}
