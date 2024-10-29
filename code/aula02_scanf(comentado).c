//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código está a explicação do que fizemos segunda aula do clube
//O enunciado do que trabalhos é o seguinte:

/*
    Crie duas variáveis de valores inteiros, atribua valores 
    a eles e imprima os dois números, a soma, a subtração,
    a multiplicação e a divisão deles no seguinte formato:

    Os números informados são <num1> e <num2>.

    A <operação> dos dois números é <resultado>.
*/

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Inicio do cabeçalho
//Nessa código usaremos, de novo, somente a biblioteca 'stdio.h' de novo
#include <stdio.h>
//Fim do cabeçalho

//Inicio da função principal
int main(){
    //na programação, é recomendado concentrar as declarações de variáveis no início da função.
    int num1, num2, resultado;

    //na ultima aula vimos como mostrar informação na tela e declaração de variáveis, agora vamos aprender como inserir informação nosso código
    //para isso vamos utilizar a função 'scanf'
    //para ela funcionar, é necessário dois paramêtros:
    //o primeiro entre aspas, assim como no 'printf', é para informar o tipo da variável que será utilizado na função, sendo eles:
    //  %d - para valores do tipo int
    //  %f - para valores do tipo float
    //  %c - para valores do tipo char
    //  %s - para cadeias de caracteres (ignorem esse por enquanto, essa é uma cena para proximos capitulos)
    //no segundo paramêtro, devemos passar o nome da variável, mas diferente do 'printf', devemos colocar o sinal '&' antes do nome da variável

    //dica: toda vez que formos solicitar entrada de dados para usuários, devemos informar como ele deve entrar com esse dado para que o usuário não fique perdido
    //para esse exemplo, utilizamos a função 'printf' para informar que ele deve inserir um número
    printf("Digite o primeiro número:");
    //como vamos trabalhar com variáveis do tipo inteiro, o primeiro paramêtro da função 'scanf' deve ser o %d
    scanf("%d", &num1);
    
    //agora repetimos para o segundo valor que vamos usar para o exemplo
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    //agora vamos realizar as operações aritmeticas usando os dois números informados
    //na programação, existem diversas formas de realizar a mesma tarefa.
    //por exemplo, a seguir tem alguns exemplos de como fazer operações aritmeticas

    printf("\n");//lembrando, para dar a quebra de linha, usamos o comando barra invertida e n (\n) dentro das aspas do 'printf'

    //nesse exemplo, realizamos a soma dos números fazendo a operação como um dos paramêtros da função 'printf'
    printf("A soma dos dois números é %d\n", num1+num2);
    //o mesmo foi feito para a conta de subtração
    printf("A subtração dos dois números é %d\n", num1-num2);
    
    //outra forma de fazer operações, é associar o valor da operação a uma variável 
    resultado = num1*num2; //para fazer contas de multiplicação, usamos o asterisco (*)
    printf("A multiplicação dos dois números é %d\n", resultado);//e para mostrar o resultado, é só passar a variável como um paramêtro
    
    
    resultado = num1/num2; //e para fazer contas de divisão, usamos o barra (/)
    printf("A divisão dos dois números é %d\n", resultado);
    //a divisão pode ocorrer uma coisa um pouco engraçada, se o resultado for um número com casas decimais
    //o programa vai mostrar um valor, mas não do jeito que a gente espera, pos ele sempre arredonda a conta bara baixo
    //por exemplo, se a conta for 5/2, o resultado é 2.5, mas ele mostra só a parte inteira (2), ignorando a casa decimal (.5)

    return 0;
}
//Fim da função principal