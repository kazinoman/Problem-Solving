
#include<bits/stdc++.h>
using namespace std;


int main() {
	
	int in;
    cin >> in;
    
	int arr[in];
	
	for(int i = 0; i<in; i++){
		int a,b,c;
		
		cin>> a>>b>>c;
		if(a < b && a < c){
			arr[i] = a;
			
			a=0;
			b=0;
			c=0;
		}else if(b < a && b < c ){
			arr[i] = b;
			a=0;
			b=0;
			c=0;
		}else {
			arr[i] = c;
			a=0;
			b=0;
			c=0;
		}
		
//		cout <<a << " " <<b << " " <<c; 
	}
	
	for(int i = 0; i < in ; i++){
//		cout >> arr[i];
        printf("%d ", arr[i]);
	}
	
	return 0;
}
