from collections import deque
while True:
    try:
        s = input()
        pilha = deque()
        certo = True
        qt = 0
        for i in s:
            if i == "(":
                pilha.append(i)
            elif i == ")":
                qt += 1
                if len(pilha) > 0:
                    pilha.pop()
                    qt -= 1
        if len(pilha) > 0 or qt > 0:
            certo = False
        if certo:
            print("correct")
        else:
            print("incorrect")
    except EOFError:
        break