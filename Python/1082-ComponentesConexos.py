alfa = "abcdefghijklmnopqrstuvwxyz"
letras = {}
numeros = {}
for i, x in enumerate(alfa):
    letras[x] = i+1
for i, x in enumerate(alfa):
    numeros[i+1] = x

def dfs(no, grafo, vis, vec):
    vis[no] = True
    vec.append(no)
    for prox in grafo[no]:
        if (not vis[prox]):
            dfs(prox, grafo, vis, vec)
    return vec

N = int(input())
for i in range(N):
    E, L = map(int, input().split())
    grafo = [[] for _ in range(E+1)]
    vis = [False for _ in range(E+1)]
    vis[0] = True
    for j in range(L):
        x, y = input().split()
        grafo[letras[x]].append(letras[y])
        grafo[letras[y]].append(letras[x])
    cont = 0
    print(f"Case #{i+1}:")
    for j in range(E+1):
        if (not vis[j]):
            nums = []
            nums = dfs(j, grafo, vis, nums)
            nums.sort()
            cont += 1
            for i in nums:
                print(f"{numeros[i]},",end="")
            print()
    print(f"{cont} connected components\n")