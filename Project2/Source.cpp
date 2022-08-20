// calculator v2.0

#include <iostream>

using namespace std;

int main() {
	while (true) {
		double a, b;
		cout << "Please, enter operator: ";
		cout << "+, -, /, *" << endl;
		char operators;
		cin >> operators;
		if (operators == '+') {
			cout << "Enter numbers: ";
			cin >> a >> b;
			cout << a + b << endl;
		}
		else if (operators == '-') {
			cout << "Enter numbers: ";
			cin >> a >> b;
			cout << a - b << endl;
		}
		else if (operators == '*') {
			cout << "Enter numbers: ";
			cin >> a >> b;
			cout << a * b << endl;
		}
		else if (operators == '/') {
			cout << "Enter numbers: ";
			cin >> a >> b;
			cout << a / b << endl;
		}
		else {
			cout << "Please try again!" << endl;
		}
	}
	return 0;
}