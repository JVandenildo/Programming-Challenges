def SumSquareDifference(firstRange, secondRange):
    init = 1
    sumFirstRange = 0
    while init <= firstRange:
        sumFirstRange = sumFirstRange + (init * init)
        init = init + 1

    init = 1
    sumSecondRange = 0
    while init <= secondRange:
        sumSecondRange = sumSecondRange + init
        init = init + 1
    sumSecondRange = sumSecondRange * sumSecondRange

    return sumSecondRange - sumFirstRange


firstRange = int(input("First range: "))
secondRange = int(input("Second range: "))

print(SumSquareDifference(firstRange, secondRange))
