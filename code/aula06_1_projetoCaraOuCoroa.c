//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código temos os algoritmos que vimos na sexta aula do clube
//Nós fizemos o código de um jogo de cara ou coroa

//o enunciado do nosso jogo era:
    /*
        Jogo de Cara ou Coroa

        Desenvolva um jogo onde o usuário escolhe entre "Cara" e "Coroa",
        o programa sorteia aleatoriamente o resultado,
        informando se o usuário acertou ou errou. Regras:
            1- Solicite ao usuário que escolha entre "Cara" (0) ou "Coroa" (1). Use um número para cada opção para facilitar a leitura.
            2- Gere uma escolha aleatória;
            3- Compare a escolha do usuário com o resultado sorteado;
            4- Exiba uma mensagem informando se o usuário acertou ou errou.
    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    
    int escolha, moeda;
    
    moeda = rand()%2;
    
    printf("Escolha Cara (0) ou Coroa (1): ");
    
    scanf("%d", &escolha);
    
    printf("O resultado foi: ");
    if (moeda == 0) 
        printf ("Cara\n");
    else if (moeda == 1)
        printf ("Coroa\n");
    
    if (moeda == escolha) 
        printf ("Parabéns! Você acertou!\n");
    else if (moeda != escolha)
        printf ("Que pena! Você errou.\n");
    
    printf ("Obrigado por jogar!");
    return 0;
}

/*
Desafio extra:
Após cada rodada, pergunte ao usuário se ele deseja jogar novamente. Jogue até que o usuário decida parar.
*/