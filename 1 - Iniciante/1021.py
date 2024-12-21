valor = float(input())

inteiro = int(valor)
decimal = int((valor - inteiro)*100)

ced100 = inteiro//100
ced50 = (inteiro-ced100*100)//50
ced20 = (inteiro-ced100*100-ced50*50)//20
ced10 = (inteiro-ced100*100-ced50*50-ced20*20)//10
ced5 = (inteiro-ced100*100-ced50*50-ced20*20-ced10*10)//5
ced2 = (inteiro-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5)//2

moed100 = (inteiro-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5-ced2*2)//1
moed50 = decimal//50
moed25 = (decimal-moed50*50)//25
moed10 = (decimal-moed50*50-moed25*25)//10
moed5 = (decimal-moed50*50-moed25*25-moed10*10)//5
moed1 = (decimal-moed50*50-moed25*25-moed10*10-moed5*5)//1


print("NOTAS:")
print("{} nota(s) de R$ 100.00".format(ced100))
print("{} nota(s) de R$ 50.00".format(ced50))
print("{} nota(s) de R$ 20.00".format(ced20))
print("{} nota(s) de R$ 10.00".format(ced10))
print("{} nota(s) de R$ 5.00".format(ced5))
print("{} nota(s) de R$ 2.00".format(ced2))

print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(moed100))
print("{} moeda(s) de R$ 0.50".format(moed50))
print("{} moeda(s) de R$ 0.25".format(moed25))
print("{} moeda(s) de R$ 0.10".format(moed10))
print("{} moeda(s) de R$ 0.05".format(moed5))
print("{} moeda(s) de R$ 0.01".format(moed1))
