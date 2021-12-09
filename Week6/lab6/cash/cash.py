import cs50

cambio1 = cs50.get_float("Change owed: ")
cambio = int(cambio1 * 100)
# aqui se podría haber hecho un do wwhile
while not cambio > 0:
    cambio1 = cs50.get_float("Change owed: ")
    cambio = int(cambio1 * 100)
# una vez verificada l aentrada empezamos el programa
monedas = [25, 10, 5, 1]
monedas_devueltas = 0
while cambio > 0:
    for moneda in monedas:
        while cambio >= moneda:
            monedas_devueltas += 1
            cambio = cambio - moneda
            if cambio == moneda:
                monedas_devueltas += 1
                cambio = cambio - moneda
                break
# con esto acabamos
print(f"{monedas_devueltas}")
