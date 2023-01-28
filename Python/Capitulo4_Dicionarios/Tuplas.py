ips={}
resp="S"
while resp=="S":
    ips[(input("Digite os dois primeiros octetos: "), input("Digite os dois ultimos octetos: "))]=input("Nome da maquina: ")
    resp=input("Digite <S> para continuar: ").upper()

print("Exibindo ip's: ")
for ip in ips.keys():
    print(ip[0]+"."+ip[1])

print("Exibindo maquinas com o mesmo endereco: ")
pesquisa=input("Digite os dois ultimos octetos: ")
for ip,nome in ips.items():
    if(ip[1]==pesquisa):
        print(nome)

print("Exibindo as maquinas que compoem uma mesma rede: ")
rede=input("Digite os dois primeiros octetos: ")
for ip,nome in ips.items():
    if(ip[0]==rede):
        print(nome)