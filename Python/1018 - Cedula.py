valor = int(input())

ced100 = valor//100
ced50 = (valor-ced100*100)//50
ced20 = (valor-ced100*100-ced50*50)//20
ced10 = (valor-ced100*100-ced50*50-ced20*20)//10
ced5 = (valor-ced100*100-ced50*50-ced20*20-ced10*10)//5
ced2 = (valor-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5)//2
ced1 = (valor-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5-ced2*2)//1

print(valor)
print("{} nota(s) de R$ 100,00".format(ced100))
print("{} nota(s) de R$ 50,00".format(ced50))
print("{} nota(s) de R$ 20,00".format(ced20))
print("{} nota(s) de R$ 10,00".format(ced10))
print("{} nota(s) de R$ 5,00".format(ced5))
print("{} nota(s) de R$ 2,00".format(ced2))
print("{} nota(s) de R$ 1,00".format(ced1))
