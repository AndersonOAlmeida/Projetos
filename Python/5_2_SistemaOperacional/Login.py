import getpass

usuario=input("Digite o usuario: ").upper()
senha= getpass.getpass("Digite a senha: ")

if usuario == "BITMED" and senha == "FiAp1222":
    print("Usuário logado!")
else:
    print("Login Negado!")