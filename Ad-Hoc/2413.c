/******************************************************************************

João fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava procurando no terceiro link listado. Além disso, ele viu,
pelo site, que T PESSOAS (quantidade no terceiro L) já haviam clicado neste link antes. João havia lido anteriormente, 
também na Internet, que o número de pessoas que clicam no segundo link listado é o DOBRO de número de pessoas que clicam no TERCEIRO link listado.
Nessa leitura, ele também descobriu que o número de pessoas que clicam no segundo link é a metade do número de pessoas que clicam no primeiro link.

João está intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, como você é amigo dele, quer sua ajuda nesta tarefa.

Entrada
Cada caso de teste possui apenas um número, t (1 ≤ t ≤ 1000), que representa o número de pessoas que clicaram no terceiro link da busca.

Saída
Para cada caso de teste imprima apenas uma linha, contendo apenas um inteiro, indicando quantas pessoas clicaram no primeiro link, nessa busca.

Exemplos de Entrada: Caso 1: 2; Caso 2: 25
Exemplos de Saída: Caso 1: 8; Caso 2: 100

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int nPessoas = 0, TLink = 0, SLink = 0, PLink = 0;
    
    //Entrada de Dados
    scanf("%d", &TLink);
    
    //Desenvolvimento de Dados
    SLink = TLink * 2;
    PLink = SLink * 2;
    
    //Saída de Dados
    printf("%d\n", PLink);

    return 0;
}