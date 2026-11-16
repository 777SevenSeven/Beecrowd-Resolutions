/******************************************************************************
Após uma aula muito boa de história - sucedendo uma aula muito ruim de matemática - alguns alunos de uma determinada escola
estão com dúvidas em um simples problema. A professora pediu que eles informassem o valor numérico (por simplicidade deve ser em decimal e em algarismos arábicos)
do século de um determinado ano, mas como poucos alunos estavam acertando ela decidiu pedir sua ajuda para criar um programa que fizesse exatamente isso
a fins educativos.

Para quem não se lembra desta aula de história, o século 1, por exemplo, compreende os anos entre 1 e 100, o século 2 os anos entre 101 e 200, o século 3 
os anos entre 201 e 300 e assim por diante.  

Entrada
A entrada consiste em vários casos de teste e é terminada pelo final de arquivo (EOF). Cada linha é um novo caso de teste e contém um único inteiro N (1 ≤ N ≤ 109),
que corresponde ao valor de algum ano que deve ser processado.

Saída
Para cada caso de teste, imprima uma única linha contendo o valor do século do ano correspondente.

Exemplo de Entrada	Exemplo de Saída
1
999
2000
2001

1
10
20
21
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {

    long long N;

    while (cin >> N) {
        cout << (N - 1) / 100 + 1 << endl;
    }

    return 0;
}
