#include <iostream>
#include<cmath>
using namespace std;

int main(){
	
	double a,b,res=0.0;
	
	int i; 
	cin >> i;
    double arr[i];
	
	for(int j = 0; j < i; j++ ){
	    cin >> a >> b;
	    res = a/b;
	    
	    if(res < -1){
	      arr[j] = floor(res);	
		}else {
			arr[j] = ceil(res);
		}

	   
		a=0;
	    b=0;
	    res = 0.0;
	    
	};

    for(int j = 0; j < i; j++){
      	cout << arr[j] << " ";
   } 	
	
	return 0; 
}
