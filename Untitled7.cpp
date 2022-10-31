#include <iostream>

using namespace std;

int getMax (int num1, int num2) {
  int result; 
  
  if(num1 > num2) {
  	cout << num1 << " bigger then " << num2;
  }else {
  	cout << num2 << " bigger then "<< num1; 	
  }
  
}

int main (){
	
	getMax(200, 3);
	getMax(33,454);
	return 0;
}
