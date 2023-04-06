n = int(input("Número máximo: "))
m1 = int(input("Somar multiplos de: "))
m2 = int(input("E de: "))
i = 0
x = 0

while x < n:
    if (x % m1 == 0) or (x % m2 == 0):
        i = i + x
        x = x + 1
    else:
        x = x + 1

print(i)
