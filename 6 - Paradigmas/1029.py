cache = {}
def fibo(N):
    if N in cache:
        return cache[N]
    else:
        if N == 1:
            cache[N] = N
            return 1
        elif N == 0:
            cache[N] = N
            return 0
        else:
            R = fibo(N-1) + fibo(N-2)
        cache[N] = R
        return R

T = int(input())
for i in range(T):
    X = int(input())
    result = fibo(X)
    pri, sec = 2, 4
    for i in range(X-2):
        pri, sec = sec, pri + sec
    calls = sec-2
    print(f"fib({X}) = {calls} calls = {result}")