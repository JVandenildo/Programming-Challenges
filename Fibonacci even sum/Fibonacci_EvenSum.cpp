#include <iostream>
using namespace std;

int FibonacciEvenSum(int nth_term, int n1, int n2){
    int n3 = 0;
    int ns = 0;
    if(n1 % 2 == 0){
        ns = ns + n1;
    }
    if(n2 % 2 == 0){
        ns = ns + n2;
    }

    while(n3 < nth_term){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        if(n3 % 2 == 0){
            ns = ns + n3;
        }
    }
    
    return ns;
}

/*int main(){
    int nth_term, n1, n2;
    cout << "Last number: ";
    cin >> nth_term;
    cout << "1st term: ";
    cin >> n1;
    cout << "2nd term: ";
    cin >> n2;

    cout << FibonacciEvenSum(nth_term, n1, n2);

    return 0;
}*/