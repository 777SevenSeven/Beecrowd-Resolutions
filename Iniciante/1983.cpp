/******************************************************************************
Entrada
O arquivo contém primeiro a quantidade de alunos (3 <= n <= 100) existentes e em seguida,
os n alunos contendo o número da matrícula (0 < m < 1000000) de cada um, seguido da respectiva nota (0 <= nota <= 10.0, com 1 casa decimal).

Obs.: as notas não serão repetidas. Ou seja, não tem chance de ter dois alunos com a mesma nota.

Saída
Você deve imprimir o número do estudante que obteve a maior pontuação ou "Minimum note not reached" (sem aspas)
caso nenhum estudante tenha tirado uma nota maior ou igual a 8.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Variáveis
    int numeroMatricula = 0, casosTeste = 0;
    float nota = 0;
    
    //Entrada de Dados
    cin >> casosTeste; //3
    
    //Desenvolvimento de Dados
    cin >> numeroMatricula; //1000
    cin >> nota; //5
    
    float maiorPontuacao = nota;
    int numeroMatriculadoMaior = numeroMatricula;
    
    for(int i = 0; i < casosTeste-1; i++) {
        cin >> numeroMatricula >> nota; //1001 10, 1002 6
        if(nota > maiorPontuacao) {
            numeroMatriculadoMaior = numeroMatricula;
            maiorPontuacao = nota;
        } else {
            continue;
        }
    }
    
    //Saída de Dados
    if(maiorPontuacao >= 8) {
        cout << numeroMatriculadoMaior << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}