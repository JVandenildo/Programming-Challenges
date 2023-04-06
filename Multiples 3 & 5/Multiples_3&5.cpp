/*
 * Multiples_3_and_5.cpp
 *
 *  Created on: 27 de set de 2020
 *      Author: José
 */

#include <iostream>
using namespace std;

int main(){
	int i, x;
	i = 0;
	x = 1;

	int n, m1, m2;
	cout << "Max number: ";
	cin >> n;
	cout << "Sum multiples of: ";
	cin >> m1;
	cout << "And: ";
	cin >> m2;

	while (x < n){
		if ((x%m1 == 0) || (x%m2 == 0)){
			i = i + x;
			x = x + 1;
		}
		else{
			x = x + 1;
		}
	}
	cout << i;
	return 0;}
