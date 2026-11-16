
N = int(input())

carneiros = list(map(int, input().split()))
visitada = [False] * N

total = sum(carneiros)

pos = 0
atacadas = 0

while 0 <= pos < N:
    # Conta a estrela somente na primeira visita
    if not visitada[pos]:
        visitada[pos] = True
        atacadas += 1

    # Guarda a quantidade antes do roubo
    antes = carneiros[pos]

    # Rouba um carneiro, se houver
    if carneiros[pos] > 0:
        carneiros[pos] -= 1
        total -= 1

    # A direção depende da quantidade antes do roubo
    if antes % 2 == 1:
        pos += 1
    else:
        pos -= 1

print(atacadas, total)
