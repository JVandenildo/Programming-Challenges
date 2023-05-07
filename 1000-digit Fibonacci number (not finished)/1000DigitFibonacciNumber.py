def ManyDigits(number):
    digits = number / 10
    count = 0
    
    while abs(digits) >= 1:
        digits = digits / 10
        count = count + 1

    return count + 1

def Fibonacci(digits):
    Term1 = 1
    Term2 = 1
    lastTerm = Term1 + Term2
    count = 3
    while ManyDigits(lastTerm) != digits:
        Term1 = Term2
        Term2 = lastTerm
        lastTerm = Term1 + Term2
        count = count + 1
    print(f'Term number {count}.')

    return lastTerm

digits = int(input("Digits: "))
print(Fibonacci(digits))