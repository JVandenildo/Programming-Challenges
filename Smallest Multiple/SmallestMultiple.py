def SmallestMultiple(minimum, maximum):
    number = maximum
    init = minimum

    while init <= maximum:
        if number % init == 0:
            init = init + 1
        else:
            number = number + 1
            init = minimum

    return number


minimum = int(input("Minimum: "))
maximum = int(input("Maximum: "))

print(SmallestMultiple(minimum, maximum))
