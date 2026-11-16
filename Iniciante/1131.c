/******************************************************************************

A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
3 2
1
2 3
1
3 1
2

Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
3 grenais
Inter:2
Gremio:1
Empates:0
Inter venceu mais

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int grenais = 0, Vitoriainter = 0, Vitoriagremio = 0, empates = 0, golInter = 0, golGremio = 0, opcao = 0, verificador = 0;
    //Entrada de Dados
    
    while(1) {
        if(verificador == 0) {
            scanf("%d %d", &golInter, &golGremio); //lendo os gols feitos por ambos times
        }
        else {
        //MODO MENU
            puts("Novo grenal (1-sim 2-nao)");
            scanf("%d", &opcao);
            if(opcao == 1) {
                verificador = 0;
                continue;
            } else {
                printf("%d grenais\n", grenais);
                printf("Inter:%d\n", Vitoriainter);
                printf("Gremio:%d\n", Vitoriagremio);
                printf("Empates:%d\n", empates);
                if(Vitoriainter > Vitoriagremio) {
                    puts("Inter venceu mais");
                } else {
                    puts("Gremio venceu mais");
                }
                break;
            }
        }
        
        grenais++;
        //MODO VERIFICADOR
        if(golInter > golGremio) {
            Vitoriainter++;
            verificador = 1;
        }
        else if(golGremio > golInter) {
            Vitoriagremio++;
            verificador = 1;
        }
        else {
            empates++;
            verificador = 1;
        }
    }

    return 0;
}
