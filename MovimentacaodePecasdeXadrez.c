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
   
    return 0;
}