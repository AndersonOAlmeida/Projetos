pessoa=input("Insira seu nivel: ").upper()
genero=input("Digite seu genero: ")

if pessoa=="ADM":
    if genero=="masculino":
        print("Ola Administrador!")
    elif genero=="feminino":
        print("Ola Administradora")
elif pessoa=="USR":
    if genero=="masculino":
        print("Ola usuario!")
    elif genero=="feminino":
        print("Ola usuaria!")
elif pessoa=="GUEST":
    print("Ola visitante!")
else:
    print("Ola desconhecido(a)!")