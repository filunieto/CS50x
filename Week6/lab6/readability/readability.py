# librerías
from cs50 import get_string

# from sys import argv


def main():
    text = get_string("Text: ")
    # text = argv[1]
    # text = "There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy."
    letras = contar_letras(text)
    palabras = contar_palabras(text)
    frases = contar_frases(text)
    indice = calculo_indice(letras, palabras, frases)
    if indice < 1:
        print("Before Grade 1")
    elif indice >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {indice}")


def contar_letras(text):
    numero_letras = 0
    for letra in text:
        if 'A' <= letra <= 'z':
            numero_letras += 1
    return numero_letras


def contar_palabras(text):
    if not text:
        return 0
    numero_palabras = 1
    for letra in text:
        if letra == ' ':
            numero_palabras += 1
    return numero_palabras


# comentario
def contar_frases(text):
    numero_frases = 0
    for letra in text:
        if letra == '.' or letra == '!' or letra == '?':
            numero_frases += 1
    return numero_frases


# comentario2
def calculo_indice(letras, palabras, frases):
    L = letras * 100 / palabras
    S = frases * 100 / palabras
    indice = 0.0588 * L - 0.296 * S - 15.8
    return round(indice)


if __name__ == "__main__":
    main()