n = int(input("Number above: "))
m1 = int(input("Sum multiples of: "))
m2 = int(input("And: "))

def sumOfMultiples(n, m1, m2):
    i = 0
    x = 0

    while x < n:
        if (x % m1 == 0) or (x % m2 == 0):
            i = i + x
            x = x + 1
        else:
            x = x + 1
    
    return i

print(f'The sum of multiples of {m1} or {m2}, below {n}, is {sumOfMultiples(n, m1, m2)}.')
