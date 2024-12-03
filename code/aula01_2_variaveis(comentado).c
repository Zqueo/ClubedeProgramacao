//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código colocarei algumas explicações do que vimos de declaração de variáveis no Clube
//e vou aproveitar para mostrar outras coisas a mais

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Inicio do cabeçalho
//Nessa código usaremos de novo somente a biblioteca 'stdio.h' de novo
#include <stdio.h>
//Fim do cabeçalho

//Inicio da função principal
int main(){
    //Vamos começar a fazer de uso de Variáveis para armazenar dados
    //as variáveis são reservas na memória que são criadas ao iniciar um programa

    //Para declarar uma variável, devemos informar o tipo dela e e seu nome     

    //Na linguagem C existem três tipos básicos de variaveis, são elas:
    //  As variáveis do tipo Inteiro (int), elas podem guardar números positivos e negativos sem ponto flutuante
    //  As variáveis do tipo Real (float), elas guardam números ponto flutuante (casas decimais)
    //  E por último, as variáveis do tipo caracter (char), elas guardam um único caracter da tabela ASCII (podendo ser, letra, número ou pontuação)
    
    //Link para acessar a tabela ASCII (https://www.ascii-code.com/)

    //O nome de variável tem que seguir algumas regras:
    //  1- Podemos usar letras, números e underline (_) no nome
    //  2- O nome não pode começar com número
    //  3- Caracteres especiais não podem ser usados
    //  4- E ao usar, elas devem ser escritas da mesma forma que foram criadas, pois na linguagem C tem diferenciação de lowercase(minuscula) para uppercase(maiuscula)

    //Vamos criar uma variável chamada 'numero' do tipo inteiro, ficando assim:

    int numero; //não vamos esquecer do ponto e vírgula

    //também pode caso for declara muitas variáveis do mesmo tipo
    //pode escrever o nome das varíaveis, e elas devem ser separadas por vírgulas

    int num1, num2, num3, num4;

    //para atribuir um valor para uma variável, nós escrevemos o nome dela, e usando igual, e atribuimos a ela um valor:

    numero = 10; // a partir dessa linha a variável 'numero', passa a ter o valor 10
    
    //além disso, também é possível associar um valor a uma variável no momento da sua criação
    //é só na hora de criar a variável, atrinuir um valor a ela:

    int num5 = 20;

    //E para mostrar o valor guardado em uma variável, utilizaremos ainda a função 'printf'
    //Agora ao invês de usar um único parâmetro de texto, para ela funcionar, é necessário dois paramêtros:
    //o primeiro entre aspas, é para informar o tipo da variável que será utilizado na função, sendo eles:
    //  %d - para valores do tipo int
    //  %f - para valores do tipo float
    //  %c - para valores do tipo char
    //  %s - para cadeias de caracteres (ignorem esse por enquanto, essa é uma cena para proximos capitulos)
    //no segundo paramêtro, devemos passar o nome da variável
    //como exemplo vamos mostrar a variável 'numero' no console:
    printf("O Valor da variável é %d", numero);

    return 0;
}
//Fim da função principal