# librerías
import cs50

# from sys import argv


def main():
    number = cs50.get_string("Number: ")
    # number = argv[1] . Eso en ek caso de usar Sys
    longitud_numero = len(number)
    comienzo_tarjeta = number[0] + number[1]
    if longitud_numero == 15 and ((comienzo_tarjeta == "34") or (comienzo_tarjeta == "37")):
        print("AMEX")
    elif longitud_numero == 16 and (("51" <= comienzo_tarjeta <= "55")):
        print("MASTERCARD")
    elif ((longitud_numero == 16) or (longitud_numero == 13)) and (comienzo_tarjeta[0] == "4"):
        print("VISA")
    else:
        print("INVALID")
# función que resuleve el check sum


def check_sum(numero):
    suma_cifra_par = 0
    suma_cifra_impar = 0
    for cifra_par in numero[::2]:
        cifra_par = int(cifra_par) * 2
        if int(cifra_par) >= 10:
            suma = int(cifra_par % 10) + int(cifra_par / 10)
            suma_cifra_par = suma_cifra_par + suma
        else:
            suma_cifra_par = suma_cifra_par + int(cifra_par)
    for cifra_impar in numero[1::2]:
        suma_cifra_impar = suma_cifra_impar + int(cifra_impar)
    suma_total = suma_cifra_par + suma_cifra_impar
    if suma_total % 10 == 0:
        return True
    else:
        return False

# y el main porque  se ejectutan varias funciones


if __name__ == "__main__":
    main()