import math

variavel1, variavel2, variavel3 = input().split()
variavel1 = float(variavel1)
variavel2 = float(variavel2)
variavel3 = float(variavel3)

delta = (variavel2**2-4*variavel1*variavel3)

if variavel1==0 or delta<0:
    print("Impossível calcular")
else:
    R1 = (-variavel2 + math.sqrt(delta))/(2*variavel1)
    R2 = (-variavel2 - math.sqrt(delta))/(2*variavel1)
    
    print("R1 = {:.5f}".format(R1))
    print("R2 = {:.5f}".format(R2))