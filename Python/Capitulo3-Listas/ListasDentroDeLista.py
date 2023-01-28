inventario=[]
resposta = "S"

#adicionar o item no inventario
while resposta == "S":
  equipamento=[input("Equipamento: "), float(input("Valor: ")), int(input("Número Serial: ")), input("Departamento: ")]
  inventario.append(equipamento)
  resposta = input("Digite \"S\" para continuar: ").upper()

#exibir dados do inventario
for elemento in inventario:
  print("Nome.........: ", elemento[0])
  print("Valor........: R$", elemento[1])
  print("Serial.......: ", elemento[2])
  print("Departamento.: ", elemento[3])

#localizar um item no inventario
busca=input("Digite o nome do equipamento que deseja buscar: ")
for elemento in inventario:
  if busca==elemento[0]:
    print("Valor..: R$", elemento[1])
    print("Serial.: ", elemento[2])

#depreciar itens no inventario
depreciacao=input("Digite o nome do equipamento que será depreciado: ")
for elemento in inventario:
  if depreciacao==elemento[0]:
    print("Valor antigo: R$", elemento[1])
    elemento[1] = elemento[1] * 0.9
    print("Novo valor: R$", elemento[1])

#excluir um item do inventario
serial=int(input("Digite o serial do equipamento que será excluído: "))
for elemento in inventario:
  if elemento[2]==serial:
    inventario.remove(elemento)

#exibir dados do inventario
for elemento in inventario:
  print("Nome.........: ", elemento[0])
  print("Valor........: ", elemento[1])
  print("Serial.......: ", elemento[2])
  print("Departamento.: ", elemento[3])