#include<iostream>

using namespace std;

int main (){
	
	double s , res ;
    cin >> s;

	if(s <= 2000.00){
		cout << "Isento";
	} else if(s >= 2000.01 && s <= 3000.00){
	 	double a =  s-2000;
	 	res = (a*8)/100;
	 	printf("R$ %.2f",res);
	 	
	} else if(s >= 3000.01 || s >= 4500.00){
		if(s > 4500.00){
			double b = (999.99 * 8) /100;
			double c = (1499.99 * 18) / 100;
			double d = (s-4500) * 28 /100;
			res = b + c + d;
			printf("R$ %.2f",res);	
		}else {
			double a = (999.99 * 8) /100;
			double b = (s-3000.00) * 18 /100;
			res = a+b;
			printf("R$ %.2f",res);
		}
	}

	return 0;
}
