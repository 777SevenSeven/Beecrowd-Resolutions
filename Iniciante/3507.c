/******************************************************************************
Entrada
A entrada contém duas linhas. A primeira linha representa o inteiro A (1 ≤ A ≤ 230), que indica a quantidade total de animais.
A segunda linha representa o inteiro P (1 ≤ P ≤ 230), que indica a quantidade total de patas.



Saída
A saída deve conter 2 inteiros, um em cada linha. A primeira linha representa a quantidade de Tigres e a segunda 
linha representa a quantidade de Gansos existentes no zoológico. É garantido que todos os casos de teste foram feitos
de forma que nenhuma resposta será um valor decimal, não se preocupe com isso.

Explicação do primeiro caso de teste: A quantidade total de animais no zoológico é 150 e a quantidade total de patas é 500.
Com isso temos que A = 150 e P = 500. 
Como resposta, temos 100 Tigres e 50 Gansos (observe que essas quantidades somadas são iguais ao número de animais no zoológico).
A quantidade de patas dos tigres é igual a 400 e a quantidade de patas dos gansos é igual a 100
(observe que essas quantidades somadas são iguais ao número total de patas no zoológico).
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    long long Animais = 0, Patas = 0, Tigres = 0, Gansos = 0;
    
    //Entrada de Dados
    scanf("%lld", &Animais);
    scanf("%lld", &Patas);
    
    //Desenvolvimento de Dados
    Tigres = (Patas - 2 * Animais)/2;
    Gansos = Animais - Tigres;
    
    //Saída de Dados
    printf("%lld\n", Tigres);
    printf("%lld\n", Gansos);

    return 0;
}
