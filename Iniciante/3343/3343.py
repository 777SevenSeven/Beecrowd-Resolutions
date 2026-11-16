
# Entrada de dados
n, x = map(int, input().split())

ataque = input()

p, m, g = map(int, input().split())

# Inicializa as muralhas com resistência x
walls = [x] * n

posP = 0
posM = 0
posG = 0

for titan in ataque:

    if titan == 'P':

        while walls[posP] < p:
            posP += 1

        walls[posP] -= p

    elif titan == 'M':

        while walls[posM] < m:
            posM += 1

        walls[posM] -= m

    else:  # G

        while walls[posG] < g:
            posG += 1

        walls[posG] -= g

# Descobre qual foi a última muralha utilizada
resposta = max(posP, posM, posG) + 1

# Saída de dados
print(resposta)
