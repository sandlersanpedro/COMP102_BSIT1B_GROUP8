#include <iostream>
using namespace std;
#include <cmath>

	double square(double num) {
		return sqrt(num);
	}

int main()
	{
		double num1;

		cout << "Enter a number: ";
		cin >> num1;
		cout << "The square root of " << num1 << " is " << square(num1) << "." << endl; 

		return 0;
	}
