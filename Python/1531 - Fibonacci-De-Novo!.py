FibArray = [0, 1]
 
def fibonacci(n):
    if n < len(FibArray):
        return FibArray[n]
    else:       
        FibArray.append(fibonacci(n - 1) + fibonacci(n - 2))
        return FibArray[n]

while True: 
    try:
        N, M = [int(i) for i in input().split()]
        print(fibonacci(fibonacci(N)) % M)
    except EOFError:
        break