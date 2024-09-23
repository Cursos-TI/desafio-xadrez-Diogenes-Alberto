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
    void MovimentarBispo(char cima[tamanho],char esquerda[tamanho],int movimento)
    {
        if(movimento>0)
        {
            printf("%s",cima);
            printf("%s",esquerda);
            MovimentarBispo(cima,esquerda,movimento-1);
        }
    }

    void MovimentarTorre(char direcao[tamanho],int movimento)
    {
        if(movimento>0)
        {
            printf("%s",direcao);
            MovimentarTorre(direcao,movimento-1);
        }
    }
    void MovimentarRainha(char direcao[tamanho],int movimento)
    {
        if (movimento>0)
        {
            printf("%s",direcao);
            MovimentarRainha(direcao,movimento-1);
        }
    }

    void MovimentarCavalo(char direcao[tamanho],char direcao2[tamanho])
    {
        int movimento=0;
        char peca [tamanho];

        strcpy(peca,"Cavalo");
        IniciarMovimento(peca);
        for (int i = 2,j=2; i >=0 &&j>=0; i--,j--)
        {
            if(i)
            {
                printf("%s",direcao);
            }
            if(!j)
            {
                printf("%s",direcao2);
            }
        }
        FinalizarMovimento(peca);
        
    }

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char Cima[tamanho];
    char Baixo[tamanho];
    char Direita[tamanho];
    char Esquerda[tamanho];
    char Rainha[tamanho] ;
    char Bispo[tamanho] ;
    char Torre[tamanho] ;
    char Cavalo[tamanho];

    strcpy(Cima,"Cima\n");
    strcpy(Baixo,"Baixo\n");
    strcpy(Direita,"Direita\n");
    strcpy(Esquerda,"Esquerda\n");
    strcpy(Rainha,"Rainha\n");
    strcpy(Bispo,"Bispo\n");
    strcpy(Torre,"Torre\n");
    strcpy(Cavalo,"Cavalo\n");
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    IniciarMovimento(Bispo);
    MovimentarBispo(Direita,Cima,passosBispo);
    FinalizarMovimento(Bispo);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    IniciarMovimento(Torre);
    MovimentarTorre(Direita,passosTorre);
    FinalizarMovimento(Torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    IniciarMovimento(Rainha);
    MovimentarRainha(Esquerda,passosRainha);
    FinalizarMovimento(Rainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    MovimentarCavalo(Cima,Direita);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
