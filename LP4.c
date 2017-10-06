#include <stdio.h>

int main(){
    int i, j;
    float matriz[7][7], aux;
    printf("Digite uma matriz de dimensao 7x7:\n");
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("\nMatriz[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("Exibicao da matriz com a primeira e ultima linha trocadas:\n\n");
    for(j=0; j<7; j++){
        aux=matriz[0][j];
        matriz[0][j]=matriz[6][j];
        matriz[6][j]=aux;
    }
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("%8.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
