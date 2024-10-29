//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Uma breve explicação que não passei na aula
//Na linguagem C, temos a possibilidade de fazer comentários nos códigos que escrevemos
//Isso faz com que o compilador ignore o resto da linha, e permite que a gente coloque lembretes, avisos ou coisa parecida no nosso código
//Para isso, temos duas possibilidades, a primeira é usar duas barras (//), assim como está no inicio dessa linha
/*
    A outra forma é usar barra-asterisco para iniciar um bloco de comentário, e asterisco-barra para fechar o bloco
    Assim como está nesse bloco
*/
//Dito isso, vamos para o nosso primeiro código que fizemos no Clube

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Inicio do cabeçalho
//Nessa parte do código é onde iniciamos as bibliotecas que serão usadas no código
//Posteriormente, também poderemos usar aqui para cria funções, criar variáveis globais e também declara constantes, mas são cenas das próximas aulas
//Para esse exemplo vamos incluir no nosso código somente a biblioteca de stdio.h
#include <stdio.h>
//Fim do cabeçalho

//dica: não se prendam aos números ao lado, pois eles servem para nos ajudar a achar a linha onde o erro está ao compilar o código

//Inicio da função principal
//todo comando que for escrito dentro da função 'main' vai ser executado ao compilar o código
//para poder criar a função main, temos que especificar o tipo de retorno dela, e o nome ficando assim:
int main(){
    //outras formas de iniciar a função 'main' são 'void main()', 'float main()', e 'char main()', quando estivermos vendo funções, vamos entender o funcionamento de cada um

    //dando continuidade, vamos fazer o computador escrever na tela os dizeres 'Hello World!'
    //para que isso ocorra, vamos utilizar a função 'printf'
    //a função printf funciona da seguinte maneira, escrevemos printf("") dentro das aspas duplas, digitamos o que queremos que o computador mostre na tela.
    //Ficando assim:
    printf("Hello World!"); //no final de toda linha devemos terminar colocando o ponto e vírgula (;)


    //como na criação da função 'main' usamos o tipo 'int', devemos colocar um retornar alguma coisa ao compilador para que ele entenda que o programa acabou
    //para isso, usamos a função 'return' e para esse caso colocamos um valor 0
    return 0
    
    //quando o código é execultado, ao encontrar o 'return', ele encerra o bloco
} //a única excessão ao ponto e vírgula no final da linha, é quando a linha termina com chaves, seja abrindo ({), ou fechando (})
//Fim da função principal

//p.s.: existe um erro nesse código, você conseguiria achar??? (alguns editores de texto avisam onde está o erro, mas a maioria só mostra quando a gente tenta compilar o código)