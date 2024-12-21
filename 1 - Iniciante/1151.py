N = int(input())
pri = 0
sec = 1

for i in range(N):
    if i == N-1: print(pri)
    else: print(pri, end=" ")
    pri, sec = sec, pri + sec
