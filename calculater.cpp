#include <iostream>
using namespace std;

int main() {
	float number1;
	float number2;
	float result;
	char symbol;
	
	cout << "Number 1: ";
	cin >> number1;
	cout << "Number 2: ";
	cin >> number2;

	cout << "Input type(+, -, *, /, %): " ;
	cin >> symbol;

	if (symbol == '+') {
		result = number1 + number2;
	}
	else if (symbol == '-') {
		result = number1 - number2;
	}
	else if (symbol == '*') {
		result = number1 * number2;
	}
	else if (symbol == '/') {
		result = number1 / number2;
	}
	else if (symbol == '%') {
		result = fmod(number1, number2);
	}
	else {
		cout << "Calculater is invalide" << endl;
	}
	cout << result; 
	return 0;
}
