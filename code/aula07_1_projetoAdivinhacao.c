//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código temos os algoritmos que vimos na sétima aula do clube
//Nós fizemos o código de um jogo de adivinhação

//o enunciado do nosso jogo era:
    /*
        Jogo de Adivinhação

        Crie um jogo em que o programa gera um número aleatório entre 1 e 100, e o usuário deve adivinhar o número. Regras
            1- Use a função rand() para gerar um número aleatório.
            2- Solicite ao usuário que faça uma tentativa de adivinhar o número.
            3- Diga ao usuário se o palpite é muito alto ou muito baixo até ele acertar.
            4- Conte o número de tentativas e exiba no final.
    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    
    int numeroSecreto = (rand() % 100)+1;
    
    int chute, tentativas = 1;
    
    printf("Bem-vindo ao jogo de adivinhação!\n");
    
    while(1){
        printf("\nTentativa %d \n", tentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        
        printf("Você chutou %d! \n", chute);
        tentativas++;

        if(chute == numeroSecreto){
            printf("Parabéns! Você acertou! \n");
            break;
        } else if (chute > numeroSecreto){
            printf("Seu chute foi maior que o número secreto. \n");
        } else {
            printf("Seu chute foi menor que o número secreto. \n");
        }
   
    }

    printf("FIM DE JOGO! \n");
    printf("Você acertou na %dª tentativa!\n", tentativas);
    return 0;
}

/*
Desafios extras:
Peça ao usuário se ele gostaria de jogar novamente e reinicie o jogo caso ele aceite.
*/