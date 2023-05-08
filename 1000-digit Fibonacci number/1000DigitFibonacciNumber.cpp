#include <iostream>
using namespace std;

int ManyDigits(int number){
    int digits = number / 10;
    int count = 0;

    while(digits >= 1){
        digits = digits / 10;
        count = count + 1;
    }

    return count + 1;
}

int Fibonacci(int digits){
    int Term1 = 1;
    int Term2 = 1;
    int lastTerm = Term1 + Term2;
    int count = 3;

    while(ManyDigits(lastTerm) != digits){
        Term1 = Term2;
        Term2 = lastTerm;
        lastTerm = Term1 + Term2;
        count = count + 1;
    }
    cout << "Term number " << count << ".\n";

    return lastTerm;
}

/*int main(){
    int digits;
    cout << "Digits: ";
    cin >> digits;

    cout << Fibonacci(digits);

    return 0;
}*/