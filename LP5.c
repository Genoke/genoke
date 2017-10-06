#include <stdio.h>

int main(){
    int i, j, a, b;
    float matriz[5][7], aux;
    printf("Digite uma matriz de dimensao 5x7:\n");
    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            printf("\nMatriz[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("Digite uma coluna 'a' de 1 a 7:\n");
    scanf("%d", &a);
    printf("Digite uma coluna 'b' de 1 a 7:\n");
    scanf("%d", &b);
    printf("Exibicao da matriz com a coluna %d e %d trocadas:\n\n", a, b);
    for(i=0; i<7; i++){
        aux=matriz[i][a-1];
        matriz[i][a-1]=matriz[i][b-1];
        matriz[i][b-1]=aux;
    }
    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            printf("%8.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
