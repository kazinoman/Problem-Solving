#include <iostream>

using namespace std;

int main () {
	
    string inp1, inp2;
    
    getline(cin, inp1);
    getline(cin, inp2);
    
    cout << inp1.size() << " " << inp2.size() << endl;
    cout << inp1 + inp2 << endl;
//    cout << inp1[0] << " "<< inp2[0] << endl;
    
	string a= inp1;
    string b = inp2;
    
    inp1[0]= b[0];
    inp2[0]= a[0];
    
    cout << inp1 << inp2 <<endl;
    
    
    
	
	return 0; 
}
