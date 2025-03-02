/*
 * Transportation.cpp
 *
 *  Created on: 7 de abr de 2021
 *      Author: José
 */

#include <iostream>
using namespace std;

int main()
{
	/* A bus can transport 50 passengers at once
	 * Given the number of passengers waiting in the bus stations as input, you
	 * need to calculate and output how many empty seats the last bus will
	 * have*/
	/* The modulo operator, %, can help to determine the
	 * number of passengers for the last bus*/
	int passengers;
	cout << "Passengers: ";
	cin >> passengers;

	int leftPassengers = passengers % 50;

	int seatsLeft = 50 - leftPassengers;
	cout << seatsLeft;

	return 0;
}
