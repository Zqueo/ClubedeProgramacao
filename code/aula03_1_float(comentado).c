//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código está a explicação do que fizemos terceira aula do clube
//O enunciado do que trabalhos é o seguinte:
/*
    Crie três variáveis com o nome n1, n2 e n3;
    Peça para que o usuário entre com três notas;
    Calcule o valor da média das três notas e salve em uma variável chamada media;
    Mostre o resultado no seguinte formato:
*/

#include  <stdio.h>

int main(){
    //Para esse exemplo vamos usar variáveis do tipo Float
    //Elas guardam valores do conjunto de números reais, ou seja, números com casas decimais
    //A regra para crição dessas variáveis é a mesma das outras variáveis, 
    //o que difere é que ao invés de usar o tipo int, usamos o tipo float antes dos nomes.
    int n1, n2, n3;
    float media;
    
    //outra coisa que vai ser diferente, é na hora de guardar e exibir a variável do tipo float
    //para guardar usamos o parâmetro %f para indicar que estamos inserindo uma dado do tipo float
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    media = (n1+n2+n3)/3;
    
    //uma coisa importante a se lembrar... do jeito que a media foi calculada na linha de cima tem um problema...
    //as três variaveis foram declaradas como int, e estamos dividindo por um número também do tipo inteiro, logo...
    //o que vai ser associado a variável é só a parte inteira da conta, por exemplo, se o resultado for 5.333333, o .333333 será ignorado.
    //Existem algumas formas de contornar isso, uma delas é mudar o tipo das variáveis n1, n2 e n3 para float, ou
    //colocar um número do tipo float, nesse caso , ao invés de usar o 3, usaremos o 3.0
    media = (n1+n2+n3)/3.0;

    //agora para exibir, temos algumas variações:
        //se usarmos somente o %f, o valor será exibido com 6 casas depois da vírgula
        //mas podemos customizar a quantidade de casas, usando o %.0f para nenhuma casa
        //podendo ir até %.6f, para mostrar 6 casas depois da vírgula
    printf("A média foi %.1f. \n",media);
    
    return 0;
}