#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	float a, b;
	int c, d, e;
	cout << "WELCOME TO MY CALCULATOR" << endl;
	cout << "---------------------------" << endl;
	stop:
	cout << "Make your selection\n" \
		<< "addition between 2 numbers: 1\n" \
		<< "subtraction between 2 numbers: 2\n" \
		<< "multiplication between 2 numbers: 3\n" \
		<< "division between 2 numbers: 4\n" \
		<< "module of a division between 2 ints: 5\n" \
		<< "2 raised to a number: 6" << endl;
	cin >> c;
	cout << endl;
	if (0 < c && c < 7) {
		switch (c)
		{
		case 1:
			cout << "insert 2 numbers for the addition:\n" \
				<< "first number: ";
			cin >> a;
			cout << "second number: ";
			cin >> b;
			cout << endl;
			if (a > 0 || a < 0) {
				a += b;
				cout << "the result of the operation is: " << a << endl;
				break;
			}
			else {
				cout << "FATAL ERROR" << endl;
				goto stop;
			}
		case 2:
			cout << "insert 2 numbers for the substraction:\n" \
				<< "first number: ";
			cin >> a;
			cout << "second number: ";
			cin >> b;
			cout << endl;
			a -= b;
			cout << "the result of the operation is: " << a << endl;
			break;
		default:
			goto stop;
		}
	}
	else {
		cout << "FATAL ERROR" << endl;
	}




	system("pause");
}
