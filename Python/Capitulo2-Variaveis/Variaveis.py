#funcao print():
#variavel do tipo print() mostra uma mensagem na tela

nome="Humberto Delgado" #variavel do tipo string
empresa='FIAP' #variavel do tipo string
qtde_funcionarios=500 #variavel do tipo int
mediaMensalidade=856.50 #variavel do tipo float

print(nome + " trabalha na empresa " + empresa)
print("Possui:", qtde_funcionarios, "funcionarios.")
print("A media da mensalidade e de: " + str(mediaMensalidade))

#na linha 6, utiliza o sinal `+` para juntar a frase com as variaveis
#na linha 7, coloca as virgulas `,` para transformar a nossa variavel inteira em string
#na linha 8, e necessario colocar a variavel float no str para que o programa nao some os valores da variavel com a frase