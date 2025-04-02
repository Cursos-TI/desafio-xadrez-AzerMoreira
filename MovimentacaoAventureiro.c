#include <stdio.h>

int main() {
    //Mover a Torre 5 casas para a direita
    for (int t = 0; t < 5; t++) {
        printf("Torre movida para Direita\n"); // imprime a direção do movimento
    }
    //Mover o Bispo 5 casas na diagonal
    int b = 1;
   
    while (b <= 5) {
        printf("Bispo movido para Cima, Direta\n", b);// imprime a direção do movimento
        b++;
    }
    //Mover a Rainha 8 casas para esquerda
    int r = 1;
   
    do {
        printf("Rainha movida para Esquerda\n", r);// imprime a direção do movimento
        r++;
    } while (r <= 8);

        printf(" \n", r);// imprime linha em branco
       //Mover o Cavalo 2 casas para baixo e 1 para esquerda
       int movimentocompleto = 1;

       while (movimentocompleto--)
        {           
           for (int c = 0; c < 2; c++) {     
               printf("Cavalo movido para Baixo\n");// imprime a direção do movimento 2x
               }
               printf("Cavalo movido para Esquerda\n");// imprime a direção do movimento 1x
            }

    return 0;
}