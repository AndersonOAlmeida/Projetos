resposta="SIM"
while resposta=="SIM":
    nivel=input("Digite o nivel de acesso: ").upper()
    if nivel=="ADM" or nivel=="USR":
        genero=input("Digite o seu genero: ").upper()
        if nivel=="ADM":
            if genero=="FEMININO":
                print("Ola administradora")
            else:
                print("Ola administrador")
        else:
            if genero=="FEMININO":
                print("Ola usuaria")
            else:
                print("Ola usuario")
    elif nivel=="GUEST":
        print("ola visitante")
    else:
        print("Ola desconhecido(a)")
    resposta=input("Digite SIM para continuar: ").upper()