contador = 1
inter = 0
gremio = 0
empate = 0
vitoria = 0

golinter, golgremio = [int(i) for i in input().split()]
if golinter>golgremio:
    inter += 1
elif golgremio>golinter:
    gremio += 1
else:
    empate += 1
print('Novo grenal (1-sim 2-nao)')

resposta = int(input())
while resposta == 1:
    contador += 1
    golinter, golgremio = [int(i) for i in input().split()]
    if golinter>golgremio:
        inter += 1
    elif golgremio>golinter:
        gremio += 1
    else:
        empate += 1
    print('Novo grenal (1-sim 2-nao)')
    resposta = int(input())

if inter>gremio:
    vitoria = 'Inter venceu mais'
elif gremio>inter:
    vitoria = 'Gremio venceu mais'
else:
    vitoria = 'Nao houve vencedor'

print('{} grenais'.format(contador)) 
print('Inter:', inter, sep='')
print('Gremio:', gremio, sep='')
print('Empates:', empate, sep='')
print(vitoria)