resposta="SIM"
while resposta=="SIM":

    tabuada=int(input("Digite um numero para exibir a tabuada: "))
    print("Tabuada do numero", tabuada)
    for valor in range(1,11,1):
        print(str(tabuada) + " x " + str(valor) + " = " + str((tabuada*valor)))
    resposta=input("Deseaja continuar? ").upper()

#comando while nesse caso, inserido apos a mecanica do for para repeticao da funcao