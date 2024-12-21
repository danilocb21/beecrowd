while True:
    matriz = []
    num = int(input())
    if (num == 0):
        break
    linhai = colunai = 0
    linhaj = colunaj = num - 1
    
    for i in range(num):
        matriz.append([1] * num)
    
    for k in range(num):
        for i in range(len(matriz)):
            if i > linhai and i < linhaj:
                for j in range(len(matriz)):
                    if j > colunai and j < colunaj:
                        matriz[i][j] += 1
        linhai += 1
        colunai += 1
        linhaj -= 1
        colunaj -= 1
        
    for i in range(num):
        tx = ''
        for j in range(num):
            tx += " %3d" %matriz[i][j]
        print(tx[1:])
    print()