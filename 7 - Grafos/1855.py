x = int(input())
y = int(input())
mapa = []
for i in range(y):
    mapa.append([0]*x)
for i in range(y):
    temp = input()
    j = 0
    for k in temp:
        mapa[i][j] = k
        j += 1
i = 0
j = 0
estado = mapa[i][j]
while (True):
    if (i < 0 or i >= y) or (j < 0 or j >= x): 
        print('!')
        break
    atual = mapa[i][j]
    if (atual == 0):
        print('!')
        break
    if (atual == "*"):
        print('*')
        break
    if (estado != atual and atual != "."):
        if (atual == ">"):
             estado = ">"
        elif (atual == "<"):
             estado = "<"
        elif (atual == "^"):
             estado = "^"
        elif (atual == "v"):
             estado = "v"
    mapa[i][j] = 0
    if (estado == ">"):
        j += 1
    elif (estado == "<"):
        j -= 1
    elif (estado == "v"):
        i += 1
    elif (estado == "^"):
        i -= 1
