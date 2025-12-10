#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Введите длину: ";
	cin >> a;

	cout << "Введите ширину: ";
	cin >> b;

	int perimeter = (a + b) * 2;

	int square = a * b;

	cout << "Периметр: " << perimeter << endl;
	cout << "Площадь: " << square;

	return 0;
}