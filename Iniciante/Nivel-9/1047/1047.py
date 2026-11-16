# Beecrowd | 1047 - Tempo de Jogo com Minutos
# Categoria: Iniciante | Nível 9 | Assunto: Seleção
# Link: https://judge.beecrowd.com/pt/problems/view/1047



# Entrada de dados

horaInicial, minutoInicial, horaFinal, minutoFinal = map(

    int, input().split()

)



# Cálculo das horas

if horaInicial < horaFinal or (

    horaInicial == horaFinal and minutoInicial < minutoFinal

):

    resultadoHoras = horaFinal - horaInicial

elif horaInicial > horaFinal:

    resultadoHoras = 24 - horaInicial + horaFinal

else:

    resultadoHoras = 24



# Cálculo dos minutos

if minutoInicial <= minutoFinal:

    resultadoMinutos = minutoFinal - minutoInicial

else:

    resultadoHoras -= 1

    resultadoMinutos = 60 + minutoFinal - minutoInicial



# Saída de dados

print(

    f"O JOGO DUROU {resultadoHoras} HORA(S) E "

    f"{resultadoMinutos} MINUTO(S)"

)

