# Beecrowd | 1024 - Criptografia
# Categoria: Strings | Nível 5 | Assunto: Manipulação String
# Link: https://judge.beecrowd.com/pt/problems/view/1024

n = int(input())



for _ in range(n):

    texto = input()



    # Primeira passada: desloca as letras 3 posições na tabela ASCII

    resultado = []



    for caractere in texto:

        if caractere.isalpha() and caractere.isascii():

            caractere = chr(ord(caractere) + 3)



        resultado.append(caractere)



    # Segunda passada: inverte a ordem dos caracteres

    resultado.reverse()



    # Terceira passada: desloca os caracteres da metade em diante 1 posição para trás

    metade = len(resultado) // 2



    for i in range(metade, len(resultado)):

        resultado[i] = chr(ord(resultado[i]) - 1)



    print("".join(resultado))