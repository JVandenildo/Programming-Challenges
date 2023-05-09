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
    int F1 = 1;
    int F2 = 1;
    int Fn = F1 + F2;
    int count = 3;

    while(ManyDigits(Fn) != digits){
        F1 = F2;
        F2 = Fn;
        Fn = F1 + F2;
        count = count + 1;
    }
    cout << "Term number " << count << ".\n";

    return Fn;
}

/*int main(){
    int digits;
    cout << "Digits: ";
    cin >> digits;

    cout << Fibonacci(digits);

    return 0;
}*/