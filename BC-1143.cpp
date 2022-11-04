#include<bits/stdc++.h>
using namespace std;

int main () {

    int x, mul=1;
    cin >> x;

    for (int i= 1; i <= x; i++) {
        for(int j=0; j<3 ; j++) {
            mul = mul * i;
            if(j < 2) {
                cout << mul << " ";
            }else{
                cout << mul;
            }
        }
        if(i < x) {
            cout << " " <<endl;
        }
        mul=1;
    }
    return 0;
}
