//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código temos os algoritmos que vimos na quinta aula do clube

#include <stdio.h>
#include <stdlib.h> //daqui pra frente, usaremos mais uma biblioteca
                    //stdlib.h tem funções para alocação de memória, conversão de tipos,
                    //e geração de números aleátorios.

int main(){
    //a partir de agora vamos começar a ver as estruturas de repetição
    //estruturas de repetição permitem executar um bloco de código várias vezes
    //de acordo com uma condição ou um número determinado de vezes.
    //As principais estruturas de repetição em C são while, do...while e o for.

    //O while é usado quando não sabemos exatamente quantas vezes o loop será executado, mas temos uma condição que controla a repetição.
    //por exemplo, vamos criar um contador que vá de 1 a 10

    int i = 0; //primeiro criamos uma variável para usar de controle do loop.

    //e depois usamo a função while, para ela funcionar, no parametro da função usamos condicionais,
    //elas funcionam da mesma forma que vimos antes no if
    //o nosso código vai ficar assim:

    while(i<10){
        i = i+1;
        printf("%d\n",i);
    }
    
    //algumas observações:
        //1- temos que tomar cuidado em sempre inicilizar/atualizar de maneira correta a nossa variável de controle (que também costumamos
            //chamar de índice), pois se não nosso código pode não rodar ou até mesmo entrar em um loop infinito.
        //2- outra coisa é como atualizamos o nosso indice, por exemplo no código acima, se atualizamos antes de mostrar o primeiro número,
            // ele começa a contar do 0 e termina mostrando o 9, mas se atualizamos depois ele mostra de 1 a 10.
        //3- assim como o índice também temos que tomar cuidado com a a forma que escrevemos a condição
    
    printf("\n---\n\n");

    //agora vamos ver o do...while
    //vamos criar um contador decrescente que vá de 20 a 0

    i=20; //primeiro atribímos valor ao índice
    
    //e partimos para nosso do...while
    //diferente do while, o do while execulta o bloco ao menos uma vez, e confere se a condição é verdadeira, ficando assim:
    do{
        printf("%d\n",i);
        i = i-1;
    }while(i>=0);

    //mais algumas observações:
        //1- não esqueçam de atualizar o índice, nesse caso, como queremos que o 20 apareça, atualizamos a variável depois de mostrar
        //2- mais uma vez sempre tomar cuidado com a a forma que escrevemos a condição para atender o que foi proposto

    printf("\n---\n\n");

    //agora vamos criar um contador utilizando o for, mas esse cotador vai de 0 a 100, e deve mostrar somente os números pares
    //o comando for funciona de forma um pouco diferente...
    //para funcionar ele utiliza três parametros:
        //      for(inicializacao_da_variavel ; condicao do loop ; incremento){
        //          _aqui vai o código a ser repetido
        //      }
    
    for (i = 0 ; i <= 100 ; i++){
        if(i%2 == 0) printf("%d\n",i);
    }

    //explicando o código:
        //no primeiro parâmetro, definimos um valor para nosso índice. Obs, na função for, podemos decarar variáveis.
        //no segundo parâmetro, definimos a nossa condição de execução.
        //e no terceiro, definimos o incremento do loop

    //observações:
        //1- o incremento normalmente é feito pegando a variável e atribuindo o valor dela mais um, por exemplo x = x+1.
            //um outra forma de fazer isso é utilizar a funcionalidade x++, que é a mesma coisa mas digitando menos caracteres.
        //2- já para o decremento, dá pra fazer o mesmo, mas utilizando o nome da variável e o sinal --, ficando assim x--.
        //3- existem dois comandos dentro dos blocos de repetição, normalmente eles são utilizados dentro das fuções condicionais, eles são:
                //3.a- BREAK - Interrompe a execução do loop imediatamente e sai dele, ignorando quaisquer iterações restantes.
                //3.b- CONTINUE - nterrompe a iteração atual do loop e pula para a próxima, sem executar o restante do código no bloco da iteração atual.


    //um exemplo de uso:
    //vamos fazer um contador que vai de 1 a 10, mas não mostre o número 5
    
    i=0; //resetamos o índice para 0
    
    for (;; i++) { //começamos criando um for, mas com os dois primeiros parâmetro vazios (sim ele funciona, mas não se pode esquecer dos ';')
        if(i==5){
            continue; //quando o i==5 ele vai executar o continue
        } else if (i>10) {
            break; //e aqui, quando i==7 ele sai do bloco
        }
        printf("%d\n",i);
    }


    return 0;
}