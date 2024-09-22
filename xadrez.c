#include <stdio.h>
#include <string.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    const int tamanho=20;
    #define passosRainha 8
    #define passosTorre 5
    #define passosBispo 5

    void IniciarMovimento(char peca[tamanho])
    {
        printf("Iniciando o movimento da peça %s\n",peca);
    }
    void FinalizarMovimento(char peca[tamanho])
    {
        printf("Finalizando o movimento da peça %s\n",peca);
    }
    void MovimentarBispo(char cima[tamanho],char esquerda[tamanho])
    {
        int movimento=0;
        IniciarMovimento("Bispo");
        while (movimento<passosBispo)
        {
            printf("%s",cima);
            printf("%s",esquerda);
            movimento++;
        }
        FinalizarMovimento("Bispo");
    }

    void MovimentarTorre(char direcao[tamanho])
    {
        IniciarMovimento("Torre");
        for(int i=0;i<passosTorre;i++)
        {
            printf("%s",direcao);
        }
        FinalizarMovimento("Torre");
    }
    void MovimentarRainha(char direcao[tamanho])
    {
        int movimento=0;
        IniciarMovimento("Rainha");
        do
        {
            printf("%s",direcao);
            movimento++;
        }while (movimento<passosRainha);
        FinalizarMovimento("Rainha");
    }
    void MovimentarCavalo(char direcao[tamanho],char direcao2[tamanho])
    {
        int movimento=0;
        char peca [tamanho];

        strcpy(peca,"Cavalo");
        IniciarMovimento(peca);
        for (int i = 1; i <= 1; i++)
        {
            do
            {
                printf("%s",direcao);
                movimento++;
            }while (movimento<=1);
            printf("%s",direcao2);
        }
        FinalizarMovimento(peca);
        
    }

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char cima[tamanho];
    char Baixo[tamanho];
    char Direita[tamanho];
    char Esquerda[tamanho];

    strcpy(cima,"Cima\n");
    strcpy(Baixo,"Baixo\n");
    strcpy(Direita,"Direita\n");
    strcpy(Esquerda,"Esquerda\n");

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    MovimentarBispo(cima,Esquerda);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    MovimentarTorre(Direita);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    MovimentarRainha(Esquerda);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    MovimentarCavalo(Baixo,Esquerda);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
