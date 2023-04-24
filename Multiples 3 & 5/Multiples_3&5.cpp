#include <iostream>
using namespace std;

int sumOfMultiples(int n, int m1, int m2){
	int i, x;
	i = 0;
	x = 1;
	

	while (x < n){
		if ((x%m1 == 0) || (x%m2 == 0)){
			i = i + x;
			x = x + 1;
		}
		else{
			x = x + 1;
		}
	}

	return i;
}

int main(){
	int n, m1, m2;
	cout << "Number above: ";
	cin >> n;
	cout << "Sum multiples of: ";
	cin >> m1;
	cout << "And: ";
	cin >> m2;

	cout << "The sum of multiples of " << m1  << " or " << m2 << ", below " << n << ", is " << sumOfMultiples(n, m1, m2) << ".\n";

	return 0;
}
