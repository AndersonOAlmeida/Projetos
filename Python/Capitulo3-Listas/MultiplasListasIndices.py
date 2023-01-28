equipamento=[]
valor=[]
NumSerial=[]
departamento=[]
resposta="S"
while resposta=="S":
    equipamento.append(input("\nDigite o equipamento: "))
    valor.append(float(input("Digite o valor do equipamento: R$")))
    NumSerial.append(int(input("Digite o numero serial do equipamento: ")))
    departamento.append(input("Digite o departamento que o equipamento pertence: "))
    resposta=input("Digite \"S\" para continuar: ").upper()

for indice in range(0, len(equipamento)):
    print("Equipamento..: ", (indice+1))
    print("Nome.........: ", equipamento[indice])
    print("Valor........: R$", valor[indice])
    print("Serial.......: ", NumSerial[indice])
    print("Departamento.:", departamento[indice])