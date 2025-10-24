#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Enter number:";
	cin >> number;
	if (number < 1 || number > 100) {
		cout << "Mistake! Number must be between 1 and 100" << endl;
	}
	else if (number >= 0 && number <= 10) {
		cout << "Number is between 0-10" << endl;
	}
	else if (number >= 11 && number <= 20) {
		cout << "Number is between 11-20" << endl;
	}
	else if (number >= 21 && number <= 30) {
		cout << "Number is between 21-30" << endl;
	}
	else if (number >= 31 && number <= 40) {
		cout << "Number is between 31-40" << endl;
	}
	else if (number >= 41 && number <= 50) {
		cout << "Number is between 41-50" << endl;
	}
	else if (number >= 51 && number <= 60) {
		cout << "Number is between 51-60" << endl;
	}
	else if (number >= 61 && number <= 70) {
		cout << "Number is between 61-70" << endl;
	}
	else if (number >= 71 && number <= 80) {
		cout << "Number is between 71-10" << endl;
	}
	else if (number >= 81 && number <= 90) {
		cout << "Number is between 81-10" << endl;
	}
	else if (number >= 91 && number <= 100) {
		cout << "Number is between 91-100" << endl;
	}
	else {
		cout << "Number is not in range 1-100" << endl;
	}

}
