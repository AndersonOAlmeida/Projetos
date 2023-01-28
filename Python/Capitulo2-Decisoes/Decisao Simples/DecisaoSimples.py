#decisao simples

nome=input("Digite o nome do paciente: ")
idade=int(input("Digite a idade do paciente: "))
prioridade="NAO"
if idade>=65:
    prioridade="SIM"
print("O paciente " + nome + " possui atendimento prioritario? " + prioridade)