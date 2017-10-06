#include <stdio.h>

int main(){
    int i=0, j;
    float matriz[4][4];
    printf("Digite uma matriz de dimensao 4x4:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("\nMatriz[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("Exibicao da matriz:\n\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%.2f", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
