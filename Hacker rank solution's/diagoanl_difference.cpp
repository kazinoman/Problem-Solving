#include<bits/stdc++.h>
using namespace std;

int main () {

    int x, n;
    cin >> x;
    n=x;
    int arr[x][x];
    int d1= 0, d2= 0;

    for(int i = 0; i<x; i++) {
        for(int j = 0; j<x; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
            if(i == j) {
                d1= d1+arr[i][j];
            }
        }

        //cout << --n ;
        d2= d2+arr[i][--n];
    }

    cout << abs(d1-d2);

    return 0;

}
