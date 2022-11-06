#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[5], t, sum=0, sum2=0;

    for(int i=0; i<5; i++) {
        cin >> t;
        arr[i] = t;
    }

    for(int j=0; j<5; j++) {
        if(j==0) {
            sum = sum+0;
        }
        else{
            sum = sum+arr[j];
        }

        if(j==4){
            sum2 = sum2+0;
        }else{
         sum2 = sum2+arr[j];
        }

    }
        cout << sum2 << " " << sum;

    return 0;
}


