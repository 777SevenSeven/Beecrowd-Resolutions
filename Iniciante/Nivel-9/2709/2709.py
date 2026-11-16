# Beecrowd | 2709 - As Moedas de Robbie
# Categoria: Iniciante | Nível 9
# Link: https://judge.beecrowd.com/pt/problems/view/2709



import sys



# Entrada de dados

valores = list(map(int, sys.stdin.read().split()))

pos = 0



while pos < len(valores):

    M = valores[pos]

    pos += 1



    moedas = []



    for i in range(M):

        moedas.append(valores[pos])

        pos += 1



    N = valores[pos]

    pos += 1



    soma = 0



    # Desenvolvimento de dados

    for i in range(M - 1, -1, -N):

        soma += moedas[i]



    # Verificação se é primo

    primo = True



    if soma < 2:

        primo = False



    for i in range(2, soma):

        if soma % i == 0:

            primo = False

            break



    # Saída de dados

    if primo:

        print("You’re a coastal aircraft, Robbie, a large silver aircraft.")

    else:

        print("Bad boy! I’ll hit you.")

