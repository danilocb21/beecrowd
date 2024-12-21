from collections import deque

n = int(input())
for i in range(n):
    pilha = deque()
    s = input()
    cont = 0
    for i in s:
        if i == "<":
            pilha.append(i)
        elif i == ">":
            if (len(pilha) != 0):
                pilha.pop()
                cont += 1
    print(cont)