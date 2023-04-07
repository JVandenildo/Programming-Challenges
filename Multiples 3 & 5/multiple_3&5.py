n = int(input("Highest number: "))
m1 = int(input("Sum multiples of: "))
m2 = int(input("And: "))
i = 0
x = 0

while x < n:
    if (x % m1 == 0) or (x % m2 == 0):
        i = i + x
        x = x + 1
    else:
        x = x + 1

print(f'The sum multiples of {m1} and {m2} until {n} is {n}.\n')
