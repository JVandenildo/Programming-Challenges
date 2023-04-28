def SpecialPythagoreanTriplet(a, b, c):
    # a**2 + b**2 = c**2
    # a + b + c = 1000
    # a * b * c = ?

    setPyt = [a, b, c]
    sum = 0
    for i in setPyt:
        sum = sum + i

    return print(sum)

SpecialPythagoreanTriplet(3, 4, 5)