#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main () {
    int x;
    cin >> x;

    for(int i = x ; i >= 1 ; i--) {

        for(int j=0; j < i-1; j++) {
            cout << " ";
        }

        for(int k = 1; k<=((x+1)-i) ; k++) {
            cout <<"#";
        }

        cout << endl;
    }
    return 0;
}
