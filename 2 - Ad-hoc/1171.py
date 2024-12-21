N = int(input())

for i in range(N):
    X = int(input())
    pri, sec = 0, 1
    for j in range(X):
        pri, sec = sec, pri + sec
    print(f"Fib({X}) = {pri}")