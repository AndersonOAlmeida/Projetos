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

depreciacao=input("Digite o nome do equipamento que será depreciado: ")
for indice in range(0,len(equipamento)):
  if depreciacao==equipamento[indice]:
    print("Valor antigo: ", valor[indice])
    valor[indice] = valor[indice] * 0.9
    print("Novo valor: ", valor[indice])