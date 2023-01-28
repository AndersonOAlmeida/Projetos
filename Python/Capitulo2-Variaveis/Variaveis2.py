#funcao input():
#variavel do tipo input() deixa com que o usuario insira um dado para cada variavel

nome=input("Digite um funcionario: ")
empresa=input("Digite a instituicao: ")
qtde_funcionarios=int(input("Digite a quantidade de funcionarios: "))
mediaMensalidade=float(input("Digite a media da mensalidade: "))
print(nome + " trabalha na empresa " + empresa)
print("Possui:", qtde_funcionarios, "funcionarios.")
print("A media da mensalidade e de: " + str(mediaMensalidade))