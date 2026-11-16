frase = input()

if frase == frase[::-1]:
    print(f"A frase [{frase}] eh palindrome")
else:
    print(f"A frase [{frase}] nao eh palindrome")