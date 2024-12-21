N = int(input())

painel = []
count = 0
for i in range(N):
    l = input()
    if (len(painel) == 0):
        painel = ["F A C E"]
    temp = painel.copy()
    if (l == temp[len(temp)-1][::-1]):
        count += 1
        painel.pop()
    else:
        painel.append(l)
print(count)