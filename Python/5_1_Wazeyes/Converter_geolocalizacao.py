from geopy.geocoders import Nominatim
from Capitulo3_Funcoes.Funcoes_JSON import ler_arquivo,gravar_arquivo

geolocator = Nominatim(user_agent="wazeyes")
dicionario=ler_arquivo("entrada.json")
lista=dicionario["endereco"]
endereco=lista[0] + "," + lista[1] + "," + lista[2] + " " + lista[3]
location = geolocator.geocode(endereco)
saida={"coordenadas": (location.latitude, location.longitude)}
gravar_arquivo(saida, "saida.json")