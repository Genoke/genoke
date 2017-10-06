#include <stdio.h>

int main(){
    int i, j, maiorX=0, maiorY=0;
    float matriz[5][5];
    printf("Digite uma matriz de dimensao 5x5:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("\nMatriz[%d][%d]= ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j] > matriz[maiorX][maiorY]){
                maiorX=i;
                maiorY=j;
            }
        }
    }
    printf("\nO maior valor da matriz: %f",matriz[maiorX][maiorY]);
    return 0;
}
