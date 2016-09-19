#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <Windows.h>

using namespace std;

bool Integer(float d)
{
	if (d == (int)d) return true;
	return false;
}

bool IsFloat(float a) {
	if (a == (float)a) return true;
	return false;
}

int main(int argc, char** argv) {
	float a, b;
	int d, e, f;
	int c = 0;
	double g;
	cout << "WELCOME TO MY CALCULATOR" << endl;
	cout << "---------------------------" << endl;
	while (c != 7) {
		cout << "Make your selection\n" \
			<< "addition between 2 numbers: 1\n" \
			<< "subtraction between 2 numbers: 2\n" \
			<< "multiplication between 2 numbers: 3\n" \
			<< "division between 2 numbers: 4\n" \
			<< "module of a division between 2 ints: 5\n" \
			<< "2 raised to a number: 6\n" \
			<< "End the program: 7" << endl;
		cin >> c;
		cout << endl;
		if (0 < c && c < 8) {
			switch (c)
			{

			case 1:
				cout << "insert 2 numbers for the addition:\n" \
					<< "first number: ";
				cin >> a;
				cout << "second number: ";
				cin >> b;
				cout << endl;
				if (a >= 0 || a < 0) {
					a += b;
					cout << "the result of the operation is: " << a << endl;
					break;
				}
				else {
					cout << "FATAL ERROR" << endl;
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

			case 3:
				cout << "insert 2 numbers for the multiplication:\n" \
					<< "first number: ";
				cin >> a;
				cout << "second number: ";
				cin >> b;
				cout << endl;
				a = a * b;
				cout << "the result of the operation is: " << a << endl;
				break;

			case 4:
				cout << "insert 2 numbers for the division:\n" \
					<< "first number: ";
				cin >> a;
				cout << "second number: ";
				cin >> b;
				cout << endl;
				a = a / b;
				cout << "the result of the operation is: " << a << endl;
				break;

			case 5:
				cout << "insert 2 numbers for the module of the division:\n" \
					<< "first number: ";
				cin >> d;
				if (Integer(d) == 1) {
					cout << "second number: ";
					cin >> e;
					cout << endl;
					f = d % e;
					cout << "the result of the operation is: " << f << endl;
					break;
				}
				else {
					cout << "FATAL ERROR" << endl;
					break;
				}

			case 6:
				cout << "insert a number to raise 2 with that number:\n" \
					<< "your number: ";
				cin >> d;
				cout << endl;
				g = pow(2.0, d);
				cout << "the result of the operation is: " << g << endl;
				break;
			default:
			}
			Sleep(3000);
			system("cls");
		}
		else {
			cout << "FATAL ERROR\n" << endl;
		}
	}

	system("pause");
}
