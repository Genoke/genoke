#include <stdio.h>

int main(){
    int i=0, j;
    float matriz[6][6];
    printf("Digite uma matriz de dimensao 6x6:\n");
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("\nMatriz[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("Exibicao da matriz com suas posicoes multiplicadas pelo valor:\n\n");
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%8.2f ", ((i*10)+j)*matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
