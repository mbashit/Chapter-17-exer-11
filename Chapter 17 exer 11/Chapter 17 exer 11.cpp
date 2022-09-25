// Chapter 17 exer 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that lets the user enter three numbers, and then
displays a message indicating whether the given numbers can be
lengths of the three sides of a right triangle (or right-angled triangle); it
must display “Given numbers cannot be lengths of the three sides of a
right triangle” otherwise. Assume that the user enters valid values.
Hint 1: Use the Pythagorean theorem.
Hint 2: You can use lengths of 3, 4 and 5 (which can be lengths of the
three sides of a right triangle) to test your program.
*/

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "enter the three numbers: ";
	cin >> x >> y >> z;

	if (pow(x, 2) != pow(y, 2) + pow(z, 2) || pow(y, 2) != pow(x, 2) + pow(z, 2) || pow(z, 2) != pow(x, 2) + pow(y, 2)) {
		cout << "given numbers cannot be lengths of three sides of a right triangle";
	}
	else {
		cout << "given numbers are length of three sides of a right triangle";
	}
	return 0;
}

