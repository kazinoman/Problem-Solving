#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::cin;  // program uses cin
using std::endl; // program uses endl

int main () {
	
	int number1; // first user input
	int number2; // 2nd user input
	
	cout << "Enter two integer to compare"; 
	cin >> number1 >> number2;
	
	if(number1 == number2) {
		cout << number1 << "==" << number2 << endl;
	}
	
	if(number1 > number2) {
		cout << number1 << ">" << number2 << endl;
	}
	
	if(number1 < number2) {
		cout << number1 << "<" << number2 << endl;
	}	
	
	return 0;	
}

