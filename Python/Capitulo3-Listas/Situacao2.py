equipamento=[]
valor=[]
NumSerial=[]
departamento=[]
resposta="S"
while resposta=="S":
    equipamento.append(input("Digite o equipamento: "))
    valor.append(float(input("Digite o valor do equipamento em: R$")))
    NumSerial.append(int(input("Digite o numero de serial: ")))
    departamento.append(input("Digite o departamento: "))
    resposta=input("Digite 'S' para continuar: ").upper()

for indice in range(0, len(equipamento)):
    print("Equipamento..: ", (indice+1))
    print("Nome.........: ", equipamento[indice])
    print("Valor........: R$", valor[indice])
    print("Serial.......: ", NumSerial[indice])
    print("Departamento.: ", departamento[indice])

serial=int(input("Digite o serial do equipamento que será excluido: "))
for indice in range(0, len(departamento)):
  if NumSerial[indice]==serial:
    del departamento[indice]
    del equipamento[indice]
    del NumSerial[indice]
    del valor[indice]
    break

for indice in range(0,len(equipamento)):
  print("Equipamento..: ", (indice+1))
  print("Nome.........: ", equipamento[indice])
  print("Valor........: R$", valor[indice])
  print("Serial.......: ", NumSerial[indice])
  print("Departamento.: ", departamento[indice])