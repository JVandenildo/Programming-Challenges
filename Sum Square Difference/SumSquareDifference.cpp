#include <iostream>

int SumSquareDifference(int firstRange, int secondRange){
    int init = 1;
    int sumFirstRange = 0;
    while(init <= firstRange){
        sumFirstRange = sumFirstRange + (init * init);
        init = init + 1;
    }

    init = 1;
    int sumSecondRange = 0;
    while(init <= secondRange){
        sumSecondRange = sumSecondRange + init;
        init = init + 1;
    }
    sumSecondRange = sumSecondRange * sumSecondRange;

    return sumSecondRange - sumFirstRange;
}

int main(){
    int firstRange;
    std::cout << "First range: ";
    std::cin >> firstRange;

    int secondRange;
    std::cout << "First range: ";
    std::cin >> secondRange;

    std::cout << SumSquareDifference(firstRange, secondRange) << ".\n";

    return 0;
}