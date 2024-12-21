def isPrime(n):
    if n <= 1: return False
    for i in range(2, n//2+1):
        if n % i == 0: return False
    return True

n = int(input())
v = list(map(int,input().split()))
for i in v:
    if isPrime(i):
        fat = 1
        num = i
        while (num > 0):
            fat *= num
            num -= 1
        print(f"{i}! = {fat}")