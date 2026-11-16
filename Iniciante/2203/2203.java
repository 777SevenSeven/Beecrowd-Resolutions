/******************************************************************************
e canaliza a ultimate por exatamente 1.5 segundos, 
após esse tempo ele ressurge imediatamente no local alvo.

Obs: Considere que Fiddlesticks sempre luta exatamente na direção do invasor
e o invasor sempre tenta fugir na direção contrária a Fiddlesticks, em velocidade constante.

Entrada
A entrada é composta de várias linhas, cada linha contém os seguintes valores inteiros:
Xf, Yf, Xi, Yi, Vi, R1 e R2(0 ≤ Xf, Yf, Xi, Yi, Vi, R1 e R2 ≤ 100),
representando respectivamente as coordenadas de Fiddlesticks,
as coordenadas iniciais do invasor, a velocidade do invasor,
o raio de conjuração da ultimate e o raio de voo dos corvos.

Considere a unidade de medida como sendo o metro.

Saída
Na saída você deve imprimir para cada linha o caractere 'Y'
caso seja possível atingir o invasor ou 'N' caso contrário,
ambos seguidos de uma quebra de linha.
*******************************************************************************/
import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        while (in.hasNextInt()) {
            double distancia = 0, quantidadeCaminhada = 0, distanciaFinal = 0;
            
            int Xfid = in.nextInt();
            int Yfid = in.nextInt();
            int XInva = in.nextInt();
            int YInva = in.nextInt();
            int velocidadeInvasor = in.nextInt();
            int raioConjuracao = in.nextInt();
            int raioCorvos = in.nextInt();
            
            //Distancia em metros, entre eles.
            distancia = Math.sqrt(Math.pow((XInva - Xfid), 2) + Math.pow((YInva - Yfid), 2)); 
            
            //Quantidade em metros, andado pelo invasor enquanto o Fiddle estava conjurando (1.5seg)
            quantidadeCaminhada = velocidadeInvasor * 1.5;
            
            //Quanto de distancia estão um do outro no final?
            distanciaFinal = distancia + quantidadeCaminhada;
            
            //A ult vai pegar?
            if (distanciaFinal <= raioConjuracao + raioCorvos) {
                System.out.println("Y");
            } else {
                System.out.println("N");
            }
        }
        in.close();
	}
}
