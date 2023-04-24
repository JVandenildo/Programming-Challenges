#include <iostream>
#include <vector>
using namespace std;

int LargestPrimeFactor(int number){
    vector<int> f_primes;
    int ni = 1;

    while (ni <= number){
        if(number % ni == 0){
            int nn = 1;
            vector<int> f;

            while(nn <= ni){
                if(ni % nn == 0){
                    f.push_back(nn);
                }
                nn = nn + 1;
            }
            if(f_primes.size() == 2){
                f_primes.push_back(ni);
            }
        }
        ni = ni + 1;
    }

    return 2;
}

/*int main(){
    int number;
    cout << "Number: ";
    cin >> number;

    cout << "Largest prime factor of " << number << " is " << LargestPrimeFactor(number) << ".\n";

    return 0;
}*/
