//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código vamos dar continuidade a terceira aula do clube
//O enunciado do que trabalhos é o seguinte:
/*
    Crie três variáveis com o nome n1, n2 e n3;
    Peça para que o usuário entre com três notas;
    Calcule o valor da média das três notas e salve em uma variável chamada media;
    Mostre o resultado no seguinte formato:
*/

#include  <stdio.h>

int main(){
    int n1, n2, n3;
    float media;
    
    printf("Digite as três notas do aluno:");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1+n2+n3)/3.0;

    printf("A média foi %.1f. \n",media);

    //até aqui não tem muita coisa de diferente do que vimos na ultima aula

    //agora vamos usar as funções condicionais if, else e else if.
    //as três funções são usadas para executar um bloco de código caso a condição declarada for atendida.
    /*
        a sintaxe para execução do if é:
            if (condicao){
                tudo que estiver neste bloco será executado se a condição for atendida
            } else {
                já o else só será executado se a condição do if não for atendida
            }
    */

    /*
        nós também podemos aninhar mais de um if, para isso usamos o "else if", ficando assim:
            if (condicao1){
                tudo que estiver neste bloco será executado se a condição 1 for atendida
            } else if (condicao2){
                tudo que estiver neste bloco será executado se a condição 2 for atendida
            } else {
                já o else só será executado se a condição do if não for atendida
            }
    */

    //agora vamos indicar se o aluno foi aprovado está de recuperação ou reprovado.
    /*
        as regras serão as seguintes:
            1- se o aluno tirar menos de 5 na média ele está reprovado;
            2- se o aluno estiver com nota entre 5 e menos de 6 ele etá de recuperação;
            3- se o aluno estiver com nota maior ou igual a 6 ele está aprovado
    */

    //o código vai ficar assim:
    if(media >= 6 && media <=10){
        printf("O aluno foi aprovado");
    } else if (media >=5 && media<6){ 
        printf("O aluno esta de recuperação");
    }else if (media < 5 && media >=0){
        printf("O aluno foi reprovado");
    }

    return 0;
}