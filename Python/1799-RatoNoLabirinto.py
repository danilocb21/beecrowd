def bfs(grafo, vertice, fim):
    fila = [vertice]
    marcados = [False] * len(grafo)
    marcados[vertice] = True
    antecessor = [-1] * len(grafo)

    while (fila):
        for i in grafo[fila[0]]:
            if (not marcados[i]):
                marcados[i] = True
                fila.append(i)
                antecessor[i] = fila[0]
        fila.pop(0)

    caminho = 0
    while (fim != vertice):
        fim = antecessor[fim]
        caminho += 1
    return caminho

N, T = map(int, input().split())

mapa = {}
for i in range(N):
    mapa[i] = []

letras = {}
x, y = 0, 1
for i in range(T):
    d1, d2 = input().split()

    if (d1 not in letras):
        letras[d1] = x
        x += 2
    if (d2 not in letras):
        letras[d2] = min(x,y)

    mapa[letras[d1]].append(letras[d2])
    mapa[letras[d2]].append(letras[d1])

    x = max(letras.values()) + 1
    y = x + 1

entrada = letras["Entrada"]
bau = letras["*"]
saida = letras["Saida"]
        
print(bfs(mapa, entrada, bau) + bfs(mapa, bau, saida))