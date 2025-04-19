#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    /*
    Nível Novato - Movimentação das Peças
    Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    Implementação de Movimentação do Bispo
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    Implementação de Movimentação da Torre
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    Implementação de Movimentação da Rainha
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    */

        //torre indo para direita
        printf("Torre\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d° Direita\n", i+1);
        }
        //Bispo indo para diagonal
        printf("Bispo\n");
        int pos = 0;
        while (pos < 5)
        {
            if(pos%2 == 0){
                printf("%d° Cima\n", pos+1);
            }else{
                printf("%d° Direita\n", pos+1);
            }
            pos = pos +1;
        }
        //Rainha indo para esquerda
        printf("Rainha\n");
        int ra = 0;
        do
        {
            printf("%d° Esquerda\n",ra);
            ra = ra + 1;
        } while (ra <= 8);
        


    return 0;
}
