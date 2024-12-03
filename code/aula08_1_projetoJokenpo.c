//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código temos os algoritmos que vimos na sétima aula do clube
//Nós fizemos o código de um jogo de adivinhação

//o enunciado do nosso jogo era:
    /*
        Jokenpô!

        Desenvolva um jogo onde o usuário joga Pedra, Papel ou Tesoura contra o computador. Regras:
            1- Peça ao usuário que escolha entre "Pedra", "Papel" ou "Tesoura";
            2- Gere uma escolha aleatória para o computador;
            3- Compare as escolhas e determine o vencedor;
            4- Exiba o resultado de cada rodada.
    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    
    int jogador, computador;
    
    computador = rand()%3;

    printf("Jokenpô!\n\nConsidere:\n0 - Pedra\n1 - Papel\n2 - Tesoura\nEscolha um: ");
    scanf("%d", &jogador);
    printf("O computador escolheu: ");
    
    if (computador == 0) 
        printf ("Pedra\n");
    else if (computador == 1)
        printf ("Papel\n");
    else if (computador == 2)
        printf ("Tesoura\n");
    
    if (jogador == computador) 
        printf ("Empate!\n");
    else if (jogador == 0 && computador == 2)
        printf ("Você Ganhou!\n");
    else if (jogador == 1 && computador == 0)
        printf ("Você Ganhou!\n");
    else if (jogador == 2 && computador == 1)
        printf ("Você Ganhou!\n");
    else
        printf ("Você Perdeu!\n");

    //printf ("Deseja jogar novamente? (s/n): ");
    printf ("Obrigado por jogar!");
}

/*
Desafios extras:
Implemente um sistema de pontuação;
Jogue até que o usuário decida parar.
*/