#include <iostream>

using namespace std;

int main() 
{
	double number;

	cout << "Введите число с павающей точкой: ";
	cin >> number;

	cout << "Как double: " << number << endl;

 	int numberInt = number;

 	cout << "Как int: " << numberInt << endl;

	bool numberBool = number;

	cout << boolalpha;
	cout << "Число не равно 0? " << numberBool;

	return 0;
}