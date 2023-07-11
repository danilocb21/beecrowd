tempo = int(input())
velocidade = int(input())

distancia = tempo*velocidade
combustivel = distancia/12 # Divide por 12 porque o carro é 12 KM/L

print("{:.3f}".format(combustivel))