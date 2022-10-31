#include<iostream>

using namespace std;

int main() {
	
	int year = 0;
	cin >> year; 
	
	if(year % 4 == 0 ){
		if(year % 100 == 0 && year % 400 == 0) {
			cout << year << "is a leap year" ;
		} else {
		    cout << "this is not leap year.";
	    }
	 
	}else {
		cout << "this is not leap year.";
	}
	 
	
	return 0;
}
