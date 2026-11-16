/*
 * Beecrowd | 1118 - Várias Notas Com Validação
 * Categoria: Iniciante | Nível 3 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1118
 */

/******************************************************************************



Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.



No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.



Entrada

O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas válidas, deve ser lido um valor inteiro X . O programa deve parar quando o valor lido para este X for igual a 2.



Saída

Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. Quando duas notas válidas forem lidas, deve ser impressa a mensagem “media = ” seguido do valor do cálculo.



Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.



A média deve ser impressa com dois dígitos após o ponto decimal.



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    float nota = 0, media = 0, somador = 0;

    int contador = 0, verificador = 0;

    //Entrada de dados

    while(1) {

        scanf("%f", &nota);

        

        // MODO MENU (Já calculei a média, estou esperando 1 ou 2)

        if (verificador == 1) {

            if (nota == 2) { 

                break; // Acabou

            } 

            else if (nota == 1) {

                verificador = 0; // Voltará pro modo notas

                contador = 0;    // Resetará contagem

                somador = 0;     // Resetará soma 

            } 

            else {

                puts("novo calculo (1-sim 2-nao)"); // Opção inválida do menu

            }

            continue; // Pulará o resto do loop (o MODO NOTAS), e volta pro scanf

        }

        

         //MODO NOTAS (Verificador == 0)

         if(verificador == 0) {

            if(nota < 0.0 || nota > 10.0) {

                puts("nota invalida");

            } else {

                if(nota != 1) {

                    contador++;

                } 

                somador+=nota;

                if(contador == 2) {

                    media = (somador / 2);

                    printf("media = %.2f\n", media);

                    puts("novo calculo (1-sim 2-nao)");

                    verificador = 1;

                }

            }

        }

    }

    

    

    return 0;

}