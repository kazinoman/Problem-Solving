#include<iostream>

using namespace std;

int main() {
	
	string phase  = "freecodecamp";
	        //       01234567891011
//	phase[0] = 'B';
	
	cout << "freecodecamp" << endl;
	cout << phase.find("camp", 0) << endl; 
	cout << phase.substr(3,7) << endl;
	
	return 0;
}
