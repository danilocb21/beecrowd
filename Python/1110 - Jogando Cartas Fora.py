from collections import deque
while True:
    n = int(input())
    if n == 0:
        break
    pilha = deque(range(n,0,-1))
    descartadas = []
    while len(pilha) >= 2:
        descartadas.append(pilha.pop())
        pilha.appendleft(pilha.pop())
    descartadas = [str(i) for i in descartadas]
    pilha = [str(i) for i in pilha]
    print("Discarded cards:", ", ".join(descartadas))
    print("Remaining card:", "".join(pilha))