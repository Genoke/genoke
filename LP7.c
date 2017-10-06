#include <stdio.h>

int main(){
    int i, j;
    float matriz1[5][3], matriz2[5][3], aux;
    printf("Digite duas matrizes de 3x3:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("\nMatriz1[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz1[i][j]);
        }

    }
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf("\nMatriz2[%d][%d] = ", i+1, j+1);
            scanf("%f", &matriz2[i][j]);
        }
    }
    printf("Exibicao dos maiores valores entre matriz1 e matriz2:\n\n");
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            if(matriz1[i][j] > matriz2[i][j]) printf("%8.2f ", matriz1[i][j]);
            else printf("%8.2f ", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
