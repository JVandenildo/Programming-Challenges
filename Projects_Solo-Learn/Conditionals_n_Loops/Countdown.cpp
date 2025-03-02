/*
 * Countdown.cpp
 *
 *  Created on: 7 de abr de 2021
 *      Author: José
 */

#include <iostream>
using namespace std;

int main()
{
	/* Given a number N, as input, output numbers
	 * from N to 1 on separate lines.
	 * When the current countdown is a multiple
	 * of 5, the app should output "Beep".*/
	int n;
	cout << "Valor de n: ";
	cin >> n;

	while (n >= 1)
	{
		cout << n << endl;
		if (n % 5 == 0)
		{
			cout << "Beep" << endl;
		}
		n--;
	}

	return 0;
}
