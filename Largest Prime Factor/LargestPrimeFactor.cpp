#include <iostream>
#include <vector>

int LargestPrimeFactor(int number)
{
    std::vector<int> f_primes;
    int ni = 1;

    while (ni <= number)
    {
        if (number % ni == 0)
        {
            int nn = 1;
            std::vector<int> f;

            while (nn <= ni)
            {
                if (ni % nn == 0)
                {
                    f.push_back(nn);
                }
                nn = nn + 1;
            }
            if (f_primes.size() == 2)
            {
                f_primes.push_back(ni);
            }
        }
        ni = ni + 1;
    }

    return 2;
}

/*int main()
{
    int number;
    std::cout << "Number: ";
    cin >> number;

    std::cout << "Largest prime factor of " << number << " is " << LargestPrimeFactor(number) << ".\n";

    return 0;
}*/