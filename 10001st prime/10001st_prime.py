# function to verify if number is prime
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


def nth_prime(nth):
    prime = 1
    primeList = []

    while len(primeList) < nth:
        if primeNumber(prime) == True:
            primeList.append(prime)
        prime = prime + 1

    return max(primeList)


# the challenge asks for 10001st element
print(f"The 1001st prime is {nth_prime(1001)}.")

# in case of testing other number
nth = int(input("How many elements? "))
print(f"The {nth} prime is {nth_prime(nth)}.")
