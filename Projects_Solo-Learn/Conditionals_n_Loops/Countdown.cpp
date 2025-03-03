/*
 * Countdown.cpp
 *
 *  Created on: 7 de abr de 2021
 *      Author: José
 */

#include <iostream>

int main()
{
	/* Given a number N, as input, output numbers
	 * from N to 1 on separate lines.
	 * When the current countdown is a multiple
	 * of 5, the app should output "Beep".*/
	int n;
	std::cout << "Valor de n: ";
	std::cin >> n;

	while (n >= 1)
	{
		std::cout << n << std::endl;
		if (n % 5 == 0)
		{
			std::cout << "Beep" << std::endl;
		}
		n--;
	}

	return 0;
}
