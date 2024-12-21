from collections import deque

def dfs(no, grafo, vis):
    pilha = deque()
    pilha.append(no)
    while (pilha):
        elem = pilha.pop()
        vis[elem] = True
        for i in grafo[elem]:
            if (not vis[i]):
                pilha.append(i)

N, M = map(int, input().split())
grafo = [[] for _ in range(N+1)]
vis = [False for _ in range(N+1)]
vis[0] = True
for i in range(M):
    X, Y = map(int, input().split())
    grafo[X].append(Y)
    grafo[Y].append(X)

cont = 0
for i in range(N+1):
    if (not vis[i]):
        dfs(i, grafo, vis)
        cont += 1
print(cont)