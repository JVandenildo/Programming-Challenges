def primeNumber(number):
    numberHalf = number / 2
    divisor = 1
    divisorList = []

    while divisor <= numberHalf:
        if number % divisor == 0:
            divisorList.append(divisor)
        divisor = divisor + 1

    if len(divisorList) == 1:
        return True
    else:
        return False


def SummationOfPrimes(number):
    count = 1
    listCount = []
    summation = 0

    while count < number:
        if primeNumber(count) == True:
            listCount.append(count)
            summation = summation + count
        count = count + 1
    print(f"{len(listCount)}, {listCount}.")

    return summation


number = int(input("Number: "))

# challenge asks for 2000000
print(SummationOfPrimes(number))
