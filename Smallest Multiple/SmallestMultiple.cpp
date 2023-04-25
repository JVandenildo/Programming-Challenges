#include <iostream>

int SmallestMultiple(int minimum, int maximum){
    int number = maximum;
    int init = minimum;

    while(init <= maximum){
        if(number % init == 0){
            init = init + 1;
        }
        else{
            number = number + 1;
            init = minimum;
        }
    }

    return number;
}

int main(){
    int minimum;
    std::cout << "Minimum: ";
    std::cin >> minimum;
    int maximum;
    std::cout << "Maximum: ";
    std::cin >> maximum;

    std::cout << (SmallestMultiple(minimum, maximum));

    return 0;
}