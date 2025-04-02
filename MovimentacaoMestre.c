#include <stdio.h>

void movertorre(int casas) {
    if (casas > 0) {
        printf("Torre movida para Direita\n"); // imprime a direção do movimento
        movertorre(casas - 1); // chama a função recursivamente
    }
}
void moverbispo(int casas) {
    if (casas > 0) {
        printf("Bispo movido para Cima, Direita\n"); // imprime a direção do movimento
        moverbispo(casas - 1); // chama a função recursivamente
    }
}
void moverrainha(int casas) {
    if (casas > 0) {
        printf("Rainha movida para Esquerda\n"); // imprime a direção do movimento
        moverrainha(casas - 1); // chama a função recursivamente
    }
}    
int main() {
    movertorre(5); // Mover a Torre 5 casas para a direita
    moverbispo(5); // Mover o Bispo 5 casas na diagonal 
    moverrainha(8); // Mover a Rainha 8 casas para esquerda 

    int movimentocompleto = 1; // Mover o Cavalo 2 casas para baixo e 1 para esquerda

    while (movimentocompleto--)
    {           
       for (int c = 0; c < 2; c++) {     
           printf("Cavalo movido para Cima\n");// imprime a direção do movimento 2x
           }
           printf("Cavalo movido para Direita\n");// imprime a direção do movimento 1x
        }
    return 0;
}