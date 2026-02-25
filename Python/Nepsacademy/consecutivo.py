import sys

def main():

    input_data = sys.stdin.read().split()

    n = int(input_data[0])

    valores = []
    lista_cortada = input_data[1:]

    #valores = [int(x) for x in input_data[1:]]
    for x in lista_cortada:
        numero = int(x)
        valores.append(numero)

    pontos = 1
    max_pontos = 1

    for i in range(1, n):
        if valores[i] == valores[i-1]:
            pontos += 1
        else:
            max_pontos = max(pontos, max_pontos)
            pontos = 1
    
    max_pontos = max(pontos, max_pontos)
    print(max_pontos)

if __name__ == "__main__":
    main()