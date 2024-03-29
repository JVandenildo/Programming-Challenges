def LargestPrimeFactor(number):
    f_primes = []
    ni = 1

    while ni <= number:
        if number % ni == 0:
            nn = 1
            f = []
            while nn <= ni:
                if ni % nn == 0:
                    f.append(nn)
                nn = nn + 1
            if len(f) == 2:
                f_primes.append(ni)
        ni = ni + 1

    return max(f_primes)


# using for challenge's example
print(LargestPrimeFactor(13195), LargestPrimeFactor(600851475143))

# using for other number
number = int(input("Number: "))

print(f"Largest prime factor of {number} is {LargestPrimeFactor(number)}.")
