#include <iostream>
using namespace std;

int main() {
	float userNumber;
	float userAnswerd;
	cout << "Hello! This is my App. Desiding the tasks." << endl;

	cout << "Input the number: ";
	cin >> userNumber;
	cout << "Youre number is " << userNumber << endl;
	cout << userNumber << " * 1 = ?" << endl;
	cin >> userAnswerd;
	if ((userAnswerd == userNumber * 1) == true) {
		cout << userNumber << " * 2" << endl;
		cin >> userAnswerd;
		if ((userAnswerd == userNumber * 2)) {
			cout << "Good work";
		}
	}
	else {
		cout << "Poka";
	}
	
	return 0;
}
