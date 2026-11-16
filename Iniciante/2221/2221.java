/******************************************************************************
Depois de capturar muitos Pomekons, Dabriel e Guarte resolveram batalhar.
A forma de duelo é simples, cada treinador coloca um Pomekon na batalha e vence quem tem o Pomekon com maior valor de golpe, que é definido da seguinte maneira:


O Bônus será dado ao Pomekon do treinador que estiver em um level de valor par.

Neste problema será dado a você o valor do bônus aplicado, os valores de ataque e defesa do Pomekon de Dabriel e Guarte e seus respectivos níveis, cabe a você informar o ganhador da batalha.

Entrada
A entrada é composta por diversas instâncias.
A primeira linha da entrada contém um inteiro T indicando o número de instâncias.
Cada instância começa com um inteiro B (0 ≤ B ≤ 100), que indica o valor do bônus aplicado. 
Nas duas linhas seguintes terão três inteiros Ai, Di e Li (1 ≤ Ai, Di ≤ 100, 1 ≤ Li ≤ 50), representado o valor de ataque do Pomekon, o valor de defesa e o level do treinador.
A primeira linha representa o Pomekon de Dabriel e a segunda o de Guarte.

Saída
Para instância na entrada você deverá imprimir o nome do treinador que irá vencer a batalha, em caso de empate imprima: "Empate", sem aspas.
*******************************************************************************/
import java.io.*;
import java.util.*;

public class Main {
        
    public static void main(String[] args) throws IOException {
       
        Scanner in = new Scanner(System.in);
        
        int bonus = 0, valorGolpe = 0, valorGolpe2 = 0;
        int valorAtaque = 0, valorDefesa = 0, levelTreinador = 0;
        int valorAtaque2 = 0, valorDefesa2 = 0, levelTreinador2 = 0;
        
        int instancia = in.nextInt();
        
        for(int i = 0; i < instancia; i++) {
            bonus = in.nextInt();
            valorAtaque = in.nextInt();
            valorDefesa = in.nextInt();
            levelTreinador = in.nextInt();
            
            valorAtaque2 = in.nextInt();
            valorDefesa2 = in.nextInt();
            levelTreinador2 = in.nextInt();
            
            valorGolpe = (valorAtaque + valorDefesa) / 2;
            valorGolpe2 = (valorAtaque2 + valorDefesa2) / 2;
            
            if((levelTreinador % 2) == 0) {
                valorGolpe += bonus;
            } 
            if((levelTreinador2 % 2) == 0) {
                valorGolpe2 += bonus;
            }
            
            
            if(valorGolpe > valorGolpe2) {
                System.out.println("Dabriel");
            } 
            else if(valorGolpe2 > valorGolpe) {
                System.out.println("Guarte");
            } else {
                System.out.println("Empate");
            }
        }
        
        in.close();
    }
}