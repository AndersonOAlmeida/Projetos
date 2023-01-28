tupla = list(enumerate(emails))
for chave in range(0,len(tupla)):
    print("Email: ", tupla[chave][1])
    usuarios[tupla[chave]]=[input("Digite o nome"), input("Digite o nível")]