//E aí pessoal? Zaqueu Aqui, espero que estejam bem!
//Nesse Código vamos rever parte final da quarta aula do clube

#include  <stdio.h>

int main(){
    //o último tipo de variável que ficou faltando ver foram os caracteres(char)
    //eles são usados para guardar letras maiúsculas, minúsculas números e alguns caracteres especiais
    //Para esse exemplo vamos usar variáveis do tipo char, ficando assim:

    char letra;

    //para fazer associção, podemos fazer igual as outras variáveis
    //a diferença é que temos que usar aspas simples para indicar que é um caracter. Ficando assim:

    letra = 'Z';

    //para exibir usamos a função printf, e passamos no parâmetro %c para reprensentar a variável do tipo char

    printf("o caracter guardado é %c", letra);

    //outra formar de atribuir um valor a uma variável do tipo char é usar números.
    //Mas temos umas regras
        //1- tem que ser um número inteiro positivo
        //2- pode se usar do número 32 até 127 (255 na tabela ascii estendida) 
    //Ficando assim:

    letra = 97; //97 na tabela é a leta "a"

    printf("o caracter guardado é %c", letra);

    //agora, no scanf um lembrete, ao passar o parâmetro %c, independente da quantidade de letras do que for digitado na linha,
    //somente o primeiro caracter será guardado na variável

    scanf("%c", &letra);
    printf("o caracter guardado é %c", letra);

    return 0;
}