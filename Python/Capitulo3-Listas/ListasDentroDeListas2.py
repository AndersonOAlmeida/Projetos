inventario=[]
resposta = "S"

#adicionar item no inventario
while resposta == "S":
  equipamento=[input("Equipamento: "), float(input("Valor: ")), int(input("Número Serial: ")), input("Departamento: ")]
  inventario.append(equipamento)
  resposta = input("Digite \"S\" para continuar: ").upper()

#exibir item
for elemento in inventario:
  print("Nome.........: ", elemento[0])
  print("Valor........: R$", elemento[1])
  print("Serial.......: ", elemento[2])
  print("Departamento.: ", elemento[3])

#busca de item no inventario
busca=input("\nDigite o nome do equipamento que deseja buscar: ")
for elemento in inventario:
  if busca==elemento[0]:
    print("Valor..: R$", elemento[1])
    print("Serial.: ", elemento[2])

#depreciacao de preco
depreciacao=input("\nDigite o nome do equipamento que será depreciado: ")
for elemento in inventario:
  if depreciacao==elemento[0]:
    print("Valor antigo: R$", elemento[1])
    elemento[1] = elemento[1] * 0.9
    print("Novo valor: R$", elemento[1])

#excluir item
serial=int(input("\nDigite o serial do equipamento que será excluído: "))
for elemento in inventario:
  if elemento[2]==serial:
    inventario.remove(elemento)

#exibir item
for elemento in inventario:
  print("Nome.........: ", elemento[0])
  print("Valor........: R$", elemento[1])
  print("Serial.......: ", elemento[2])
  print("Departamento.: ", elemento[3])

#resumo de valores do inventario
valores=[]
for elemento in inventario:
    valores.append(elemento[1])
if len(valores)>0:
    print("\n----------------Resultado-----------------------\n")
    print("O equipamento mais caro custa: R$", max(valores))
    print("O equipamento mais barato custa: R$", min(valores))
    print("O total de equipamentos e de: R$", sum(valores))