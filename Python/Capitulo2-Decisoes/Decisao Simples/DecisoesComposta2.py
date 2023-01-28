nome=input("Sigite o nome do paciente: ")
idade=int(input("Digite a idade do paciente: "))
doenca_infectocontagiosa=input("Suspeita de doenca infecto-contagiosa?").upper()

if idade>=65:
    print("O paciente " + nome + " POSSUI atendimento prioritario!")
elif doenca_infectocontagiosa=="SIM":
    print("O paciente " + nome + " deve ser direcionado para sala reservada.")
else:
    print("O paciente " + nome + " NAO possui atendimento e pode aguardar na sala comum!")