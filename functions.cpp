// functions;
#include <iostream>

using namespace std;

void fun(string name, int age);
int add(int num1, int num2);

int main () {
	
	fun("noman", 28);
	fun("max", 30);
	fun("mike" , 48);
	
	cout <<  add(2,2) << endl;
	cout <<  add(100,2) << endl;
	cout <<  add(100,2243) << endl;
	
	return 0;
}

void fun (string name, int age) {
	cout << "Hello " << name << ". you are "<< age << " old" <<endl;
}


int add (int num1, int num2) {
	return num1 + num2;
}

