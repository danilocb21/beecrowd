from collections import deque

while True:
    n = int(input())
    if (n == 0) : break

    va = deque(input().split())
    vb = deque(input().split())
    pilha = deque()

    res = ""
    flag = True

    for i in range(2*n):
        if i == 0:
            res += "I"
            pilha.append(va[0])
            va.popleft()

        elif len(pilha) > 0:
            if pilha[len(pilha)-1] == vb[0]:
                res += "R"
                pilha.pop()
                vb.popleft()
                if (len(pilha) == 0) and len(va) == 0: break
            else:
                if len(va) > 0:
                    res += "I"
                    pilha.append(va[0])
                    va.popleft()
                else:
                    flag = False
                    break
        else:
            if len(va) > 0:
                res += "I"
                pilha.append(va[0])
                va.popleft()
            else:
                flag = False
                break
    if flag:
        print(res)
    else:
        print(res, "Impossible")