import csv
import sys


def main():
    if len(sys.argv) != 3:
        sys.exit("Usage: python dna.py data.csv sequence.txt")
    file1 = sys.argv[1]
    file2 = sys.argv[2]
    sospechosos = []

    with open(file1) as f1:
        reader = csv.DictReader(f1)
        # con este sacamos la primera fila del cualesquiera sea el archivo de entrada
        secuencias = reader.fieldnames[1:] 
        for row in reader:
            for secuencia in secuencias:
                row[secuencia] = int(row[secuencia])
            sospechosos.append(row)
    with open(file2) as f2:
        reader2 = csv.reader(f2)
        for row in reader2:
            adn_convicto = row[0]
    # print(adn_convicto)
    secuencias_convicto = {}
    for secuencia in secuencias:
        secuencias_convicto[secuencia] = identificar_convicto(adn_convicto, secuencia)
    for sospechoso in sospechosos:
        if comparar_individuos(sospechoso, secuencias_convicto, secuencias):
            # print(f"este está en el ajo {sospechoso} . Fin ")
            # print(f"abajo las secuncias del convicto para verificar al truan de {sospechoso['name']}")
            # print(secuencias_convicto)
            sys.exit(f"{sospechoso['name']}")
    print("No match")


# la funcion hace lo que dice
def identificar_convicto(adn_convicto, secuencia):
    long_secuencia = len(secuencia)
    long_adn_conv = len(adn_convicto)
    repetciones_max = 0

    for i in range(long_adn_conv):
        repeticiones = 0
        if secuencia == adn_convicto[i: i + long_secuencia]:
            repeticiones += 1
            while (secuencia == adn_convicto[i + long_secuencia: i + long_secuencia + long_secuencia]) and (i < long_adn_conv):
                repeticiones += 1
                i = i + long_secuencia
        if repeticiones >= repetciones_max:
            repetciones_max = repeticiones
    return repetciones_max


# la funcion hace lo que dice
def comparar_individuos(sospechoso, secuencias_convicto, secuencias):
    for secuencia in secuencias:
        if sospechoso[secuencia] != secuencias_convicto[secuencia]:
            return False
    return True


if __name__ == "__main__":
    main()
    