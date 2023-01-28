import json
import os
if os.path.exists("inventario_json.json"):
    with open("inventario_json.json", "r") as arq_json:
        inventario = json.load(arq_json)
else:
    inventario={}
opcao=int(input("Digite: "
                "\n<1> para registrar ativo\n"
                "<2> para exibir ativos armazenados: "))