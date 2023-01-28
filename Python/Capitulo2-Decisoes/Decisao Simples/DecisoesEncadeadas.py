# decisoes encadeadas

nome=input("Digite o nome do paciente: ")
idade=int(input("Digite a idade: "))
doenca_infectocontagiosa=input("Suspeira de doenca infectocontagiosa?").upper()
if idade >= 65:
    print("Paciente " + nome + " COM prioridade")
    if doenca_infectocontagiosa=="SIM":
        print("Encaminhe o paciente " + nome + " para a sala AMARELA")
    elif doenca_infectocontagiosa=="NAO":
        print("Encaminhe o paciente " + nome + " para sala BRANCA")
    else:
        print("Responda a suspeita de doenca infectocontagiosa com SIM ou NAO")
else:
    print("Paciente " + nome + " SEM prioridade")
    if doenca_infectocontagiosa=="SIM":
        print("Encaminhe o paciente " + nome + " para sala AMARELA")
    elif doenca_infectocontagiosa=="NAO":
        print("Encaminhe o paciente " + nome + " para sala BRANCA")
    else:
        print("Responda a suspeita de doenca infectocontegiosa com SIM ou NAO")