#include <iostream>
using namespace std;


int quo(int a, int b) {
	return (a/b);

}
int rem(int a, int b) {
	return (a % b);

}

int main()
{
	int num1, num2 ; 

	cout << "Enter your dividend: ";
	cin >> num1;
	cout << "Enter your divisor: ";
	cin >> num2;


	cout << "Quotient: "  << quo(num1,num2) <<" "<<endl;
	cout << "Remainder: " << rem(num1, num2) << " " << endl;
	return 0;
}
