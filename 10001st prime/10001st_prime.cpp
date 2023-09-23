#include <iostream>
#include <vector>
#include <algorithm>

// function to verify if number is prime
bool primeNumber(int number)
{
    int numberHalf = number / 2;
    int divisor = 1;
    std::vector<int> divisorList;

    while (divisor <= numberHalf)
    {
        if (number % divisor == 0)
        {
            divisorList.push_back(divisor);
        }
        divisor = divisor + 1;
    }

    if (divisorList.size() == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int nth_prime(int nth)
{
    int prime = 1;
    std::vector<int> primeList;

    while (primeList.size() < nth)
    {
        if (primeNumber(prime) == true)
        {
            primeList.push_back(prime);
        }
        prime = prime + 1;
    }
    std::cout << "Size " << primeList.size() << ".\n";

    int max = *max_element(primeList.begin(), primeList.end());

    return max;
}

/*int main()
{
    int nth;
    std::cout << "How many elements? ";
    std::cin >> nth;

    // the challenge asks for 10001st element
    std::cout << nth_prime(nth);

    return 0;
}*/