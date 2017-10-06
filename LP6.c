#include <stdio.h>

int main(){
    int i, j;
    float matriz1[3][3], matriz2[3][3], aux;
    printf("Digite duas matrizes de 3x3:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\nMatriz1[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz1[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\nMatriz2[%d][%d] = ", i+1, j+1);
            scanf("%f", &matriz2[i][j]);
        }
    }
    printf("Exibicao da soma da matriz1 com a matriz2:\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%8.2f ", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
