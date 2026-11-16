
# Entrada de dados
a, b = map(int, input().split())

# Cálculo do quociente com truncamento em direção a zero
q = abs(a) // abs(b)

if (a < 0) != (b < 0):
    q = -q

# Cálculo do resto
r = a - b * q

# Ajuste para garantir resto não negativo
if r < 0:
    if b > 0:
        q -= 1
        r += b
    else:
        q += 1
        r -= b

# Saída de dados
print(q, r)
