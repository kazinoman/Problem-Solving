#include <iostream>

using namespace std;

int exponentFun (int baseNum, int powNum) {
	
	int result = 1;
	for (int i = 0; i < powNum ; i++ ) {
		result = result * baseNum;
	}
	cout << result ;
	
}

int main (){
	exponentFun(8,2);
	return 0; 
}
