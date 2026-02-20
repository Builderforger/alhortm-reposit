#include <iostream>

using namespace std;

int main() {
	
	setlocale(0, "");
	
	cout << "Введи число от 1 до 15" << endl;
	int number;
	int i = 0;
	cin >> number;
	while (i <= number)
	{
		cout << "Круг: " << i++ << endl;
	}
}
