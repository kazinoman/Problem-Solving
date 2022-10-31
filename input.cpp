#include <iostream>

using namespace std; 

int main () {
	
	char age; 
	string name;
//	cout << "enter your age: ";
//	cin >> age;
    getline(cin, name);
    cout << "Hello " << name << endl; 

//	cout << "your age is: " << age << " old." <<endl; 
	
	return 0;
}
