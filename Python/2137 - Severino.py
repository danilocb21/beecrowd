lista = []
while True:
    try:
        num = int(input())
        for i in range(num):
            livro = input()
            lista.append(livro)
        lista.sort()
        for i in range(num):
            print(lista[i])
        lista.clear()
            
    except EOFError:
        break