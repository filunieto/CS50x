from cs50 import get_int
# piramide doble

numero = get_int("Height: ")
while not(1 <= numero <= 8):
    numero = get_int("Height: ")
for i in range(1, numero + 1):
    print(" " * (numero - i), end='')
    print("#" * i, end='')
    print("  ", end='')
    print("#" * i)