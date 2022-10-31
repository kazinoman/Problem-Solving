#include <iostream>

using namespace std;

int main() {
	// while loop
	
	int index = 0; 
	while(index <= 10) {
		cout << index << endl;
		index++; 
	}
	
	// do-while
	do {
		cout << "hello world";
	} while(4 > 9);
	
	
	// for loop
	int i=0;
	
	for( i=0; i <= 10; i++ ){
		cout << i << endl; 
	}
	
	
	
	return 0; 
}
