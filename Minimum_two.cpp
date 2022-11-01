#include<iostream>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	
	long long int resA[n];

	for(int i = 0 ; i < n; i++){
	long long int a,b; 
		cin >> a >> b; 
        if(a < b){
        	
          resA[i] = a;
          
		} else {
			a = 0;
			b = 0;
		}
	}
	
	for(int i = 0 ; i < n; i++){
		printf("%d ", resA[i]);
	};
	
	return 0;
	
}
