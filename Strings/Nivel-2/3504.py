# Beecrowd | 3504 - Frase palíndromo
# Categoria: Strings | Nível 2 | Assunto: string
# Link: https://judge.beecrowd.com/pt/problems/view/3504

frase = input()



if frase == frase[::-1]:

    print(f"A frase [{frase}] eh palindrome")

else:

    print(f"A frase [{frase}] nao eh palindrome")