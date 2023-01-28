nome=input("Digite o nome do paciente: ")
idade=int(input("Digite a idade do paciente: "))
doenca_infectocontagiosa=input("Suspeita de doenca infecto-contagiosa?").upper()

if idade>=65 and doenca_infectocontagiosa=="SIM":
    print("O paciente sera direcionado para a sala AMARELA - COM prioridade")
elif idade < 65 and doenca_infectocontagiosa=="SIM":
    print("O paciente sera direcionado para a sala AMARELA - SEM prioridade")
elif idade >= 65 and doenca_infectocontagiosa=="NAO":
    print("O paciente sera direcionado para a sala BRANCA - COM prioridade")
elif idade < 65 and doenca_infectocontagiosa=="NAO":
    print("O paciente sera direcionado para a sala BRANCA - SEM prioridade")
else:
    print("Responda a suspeira de doenca infecto-contagiosa com SIM ou NAO")