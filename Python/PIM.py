CRM=input("Digite seu CRM: ")
informacoes=[]
senha=input("Digite sua senha: ")

if CRM!="0":
    if senha!="0":
        print("O que gostaria de fazer Dr.?")
        print("1 - Cadastrar novo paciente.")
        print("2 - Consultar informacoes do paciente.")
        opcao=input("Digite a opcao: ")

        if opcao=="1":
            dados=[input("Nome completo: "), str(input("CPF: ")), str(input("Data de nascimento: ")), str(input("Telefone: ")), input("E-mail: "), input("Pais de Origem: "), str(input("RG: ")), input("Estado: "), input("Cidade: "), input("Nome da mae: "), input("Sexo: ")]
            informacoes.append(dados)

        elif opcao=="2":
            busca = input("Digite o CPF do paciente que deseja buscar: ")
            for elemento in informacoes:
                if busca == elemento[1]:
                    print("Nome..............: ", elemento[0])
                    print("CPF...............: ", elemento[1])
                    print("Data de Nascimento: ", elemento[2])
                    print("Telefone..........: ", elemento[3])
                    print("E-mail............: ", elemento[4])
                    print("Pais de Origem....: ", elemento[5])
                    print("RG................: ", elemento[6])
                    print("Estado............: ", elemento[7])
                    print("Cidade............: ", elemento[8])
                    print("Nome da mae.......: ", elemento[9])
                    print("Sexo..............: ", elemento[10])

    else:
        print("Insira sua senha!")