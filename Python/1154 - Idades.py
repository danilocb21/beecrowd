idade = int(input())

ano = idade//365
restoano = idade-(ano*365)
mes = restoano//30
dia = restoano-(mes*30)

print('{} ano(s)'.format(ano))
print('{} mes(es)'.format(mes))
print('{} dia(s)'.format(dia))