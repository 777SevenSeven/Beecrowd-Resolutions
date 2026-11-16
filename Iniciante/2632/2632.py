
# Entrada de dados
casosTeste = int(input())

for i in range(casosTeste):
    width, height, x0, y0 = map(int, input().split())

    tipoMagia, nivelMagia, cx, cy = input().split()
    nivelMagia = int(nivelMagia)
    cx = int(cx)
    cy = int(cy)

    raioMagia = 0
    danoRecebido = 0

    # Descobrindo dano e raio da magia
    if tipoMagia == "fire":
        danoRecebido = 200

        if nivelMagia == 1:
            raioMagia = 20
        elif nivelMagia == 2:
            raioMagia = 30
        else:
            raioMagia = 50

    elif tipoMagia == "water":
        danoRecebido = 300

        if nivelMagia == 1:
            raioMagia = 10
        elif nivelMagia == 2:
            raioMagia = 25
        else:
            raioMagia = 40

    elif tipoMagia == "earth":
        danoRecebido = 400

        if nivelMagia == 1:
            raioMagia = 25
        elif nivelMagia == 2:
            raioMagia = 55
        else:
            raioMagia = 70

    elif tipoMagia == "air":
        danoRecebido = 100

        if nivelMagia == 1:
            raioMagia = 18
        elif nivelMagia == 2:
            raioMagia = 38
        else:
            raioMagia = 60

    # Descobrindo o ponto do retângulo mais próximo do centro
    if cx < x0:
        pontoX = x0
    elif cx > x0 + width:
        pontoX = x0 + width
    else:
        pontoX = cx

    if cy < y0:
        pontoY = y0
    elif cy > y0 + height:
        pontoY = y0 + height
    else:
        pontoY = cy

    # Distância entre o centro da explosão e o ponto mais próximo
    distanciaX = cx - pontoX
    distanciaY = cy - pontoY

    distanciaQuadrado = distanciaX ** 2 + distanciaY ** 2
    raioQuadrado = raioMagia ** 2

    # Verificando se o círculo intercepta o retângulo
    if distanciaQuadrado <= raioQuadrado:
        print(danoRecebido)
    else:
        print(0)
