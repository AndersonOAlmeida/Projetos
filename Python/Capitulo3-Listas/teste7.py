print("="*25)
print("Números divisíveis por 7")
print("="*25)
# modifique as 2 proximas variaveis para testar o programa
numeroDe = 0;
copiaNumeroDe = 0;

numeroAte = 10000;

pares = 0;
impares = 0;
divPorSete = 0;

while (numeroDe <= numeroAte):
    test = numeroDe

    if test % 2 == 0:
        pares += 1;
    else:
        impares += 1;

    if ((test % 7 == 0) and (test % 5 != 0)):
        divPorSete += 1;

    numeroDe += 1;

print ("Resumo de divisiveis entre ", copiaNumeroDe, " e ", numeroAte)
print ("\t- Números pares: ", pares)
print ("\t- Números impares: ", impares)
print ("\t- Números divisiveis por 7: ", divPorSete)