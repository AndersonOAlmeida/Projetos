from Capitulo3_Funcoes.IdentificacaoDeFuncoes import *

minhaLista=[]
print("Preenchendo")
preencherInventario(minhaLista)
print("Exibindo")
exibirInventario(minhaLista)

print("\nPesquisando")
localizarPorNome(minhaLista)
print("Alterando")
depreciarPorNome(minhaLista, 20)

print("\nExcluindo")
print(excluirPorSerial(minhaLista))
exibirInventario(minhaLista)

print("\nResumindo")
resumirValores(minhaLista)