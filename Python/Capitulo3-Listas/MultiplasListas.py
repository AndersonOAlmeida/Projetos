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
    resposta=input("Digite \"S\" para continuar: ").upper()

#ferramenta para buscar algo no codigo/equipamentos
busca=input("\nDigite o nome do equipamento que deseja buscar: ")
for indice in range(0, len(equipamento)):
    if busca==equipamento[indice]:
        print("Valor..: ", valor[indice])
        print("Serial.: ", NumSerial[indice])