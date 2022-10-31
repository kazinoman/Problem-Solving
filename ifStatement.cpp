#include <iostream>

using namespace std;

int main() {
	bool isMale = false;
	bool isTall = false;
	
	if(isMale && isTall ) {
		cout << "You are a male & tall.";
	} else if(isMale && !isTall){
		cout << "you are a short male.";
    }else if(!isMale && isTall){
    	cout << "you are not male but tall.";
	}else {
		cout <<"you are not a male or not tall.";
	}
	
	
	return 0;
}
