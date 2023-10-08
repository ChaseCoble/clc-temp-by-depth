#include <iostream>
using namespace std;
void print_introduction() {
	cout << "Hello, this program will tell you the temperature of the earth at any depth, in both farenheit and celsius!\n";
}
double celsius_at_depth(double depth) {
	double temp;
	temp = 10 * depth + 20;
	return temp;
}
double celsius_to_farenheit(double celsius) {
	double farenheit;
	farenheit = 1.8 * celsius + 32;
	return farenheit;
}
void print_conclusion(double depth) {
	cout << "The temperature of the earth at a depth of " << depth << " KM is " << celsius_at_depth(depth) << " in Celsius, and " << celsius_to_farenheit(celsius_at_depth(depth)) << " in Fahrenheit.\n";
}
int main() {
	bool toRepeat=true;
	double depth;
	char repeatInput;
	print_introduction();
	do {
		cout << "Enter a depth in KM: ";
		cin >> depth;
		print_conclusion(depth);
		cout << "Would you like to do it again? (Y/N)\n";
		cin >> repeatInput;
		while (!(repeatInput == 'y' || repeatInput == 'Y' || repeatInput == 'n' || repeatInput == 'N')) {
			cout << "That was an invalid input, please enter 'Y' or 'N': ";
			cin >> repeatInput;
		}
		if (repeatInput == 'y' || repeatInput == 'Y') {
			toRepeat = true;
		}
		else if(repeatInput == 'n' || repeatInput == 'N') {
			toRepeat = false;
		}
	} while (toRepeat);
	return 0;
}