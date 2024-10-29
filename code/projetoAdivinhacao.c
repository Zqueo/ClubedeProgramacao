//+++ Início do Cabeçalho do Código +++
#include <stdio.h> //Biblioteca de Funções de Entrada e Saída de Dados
#include <stdlib.h> //Biblioteca de Funções de controle
#include <time.h>   //Biblioteca para uso de Funções do Rélogio dentro do Código
#include <locale.h> //Biblioteca para configurar a linguagem na exibição de informação (influencia na exibição de caracteres especiais)
//+++ Fim do Cabeçalho do Código +++

//+++ Início do Código Principal +++
int main(){
    //Configuração inicial do Código:
    //  Aqui resetamos a função de gerar de números aleátorios;
    //  Também criamos as variáveis para guardar dados do nosso Jogo;
    //  E fazemos a configuração do idioma para exibição de informação;
    
    srand(time(0)); //essa função reseta o gerador de números aleatórios

    setlocale(LC_ALL, "Portuguese"); //essa função seleciona a linguagem para exibição de informação

    int numeroSecreto = (rand() % 100)+1;   //essa função gera um número aleatório
                                            //a função rand() escolhe um número decimal aleatório
                                            //por esse número ser menor que 100, temos que tratar ele para podermos usar no jogo
                                            //ao pegar o resto da divisão por 100 o retorno pode variar de 0 a 99
                                            //como vamos usar na regra a variação de 1 a 100, é só somar 1 ao valor

    int chute, tentativas = 1;  //aqui criamos uma variável chute para guardar o valor que o jogador informar,
                                //e a variável tentativa para guardar a quantidade de vezes que o jogador chutou até acertar


    //aqui usamos a função 'printf' para escrever o cabeçalho do jogo, aqui temos uma saudação e uma breve explicação da regra do jogo
    printf("******************************************* \n");
    printf("* Bem-vindo ao nosso jogo de adivinhação! * \n");
    printf("******************************************* \n");
    printf("* Eu escolhi um número entre 1 e 100.     * \n");
    printf("* E você deve adivinhar qual o número, na * \n");
    printf("* menor quantidade de tentativas possível.* \n");
    printf("******************************************* \n");
    

    while(1){
        printf("\nTentativa %d \n", tentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        
        printf("Você chutou %d! \n", chute);
        tentativas++;

        if (chute <= 0){
            printf("Você não pode chutar números menores ou iguais a 0! \n");
            continue;
        }

        if (chute > 100){
            printf("Você não pode chutar números maiores que 100! \n");
            continue;
        }

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
    printf("Você acertou na tentativa %d !\n", tentativas);
} //+++ Fim do Código Principal +++