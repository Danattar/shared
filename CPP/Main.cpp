#include <iostream>
#include <string>
using namespace std;

bool inRange(int value, int min, int max) {
	return (value >= min && value <= max ? true : false);
}

int getInput(string MESSAGE, int max, int min) {
	int value;
	cout << MESSAGE;
	cin.clear();

	while (!(cin >> value) || !(inRange(value, min, max))) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << MESSAGE;
	}
	return value;
}

int main() {
	int temp = 1;
	while (temp) {
		temp = getInput("Test : ", 10, 0);
		cout << temp << endl;
	}
	return 0;
}
