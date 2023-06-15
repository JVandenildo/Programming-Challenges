#include <iostream>
#include <vector>
using namespace std;

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

int SummationOfPrimes(int number)
{
    int count = 1;
    vector<int> listCount;
    int summation = 0;

    while (count < number)
    {
        if (primeNumber(count) == true)
        {
            listCount.push_back(count);
            summation = summation + summation;
        }
        count = count + 1;
    }

    return summation;
}

/*int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    // challenge asks for 2000000
    cout << SummationOfPrimes(number);

    return 0;
}*/