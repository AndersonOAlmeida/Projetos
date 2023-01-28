from geopy.geocoders import Nominatim
geolocator = Nominatim(user_agent="wazeyes")

endereco=input("Digite um endereco com numero e cidade. "
               
               "Exempo: Avenida Paulista, 100, São Paulo")

resultado = str(geolocator.geocode(endedreco)).split(",")

if resultado[0]!='None':
    print("Endereco completo.: ", resultado)
    print("Bairo.............: ", resultado[1])
    print("Cidade............: ", resultado[2])
    print("Regiao............: ", resultado[3])