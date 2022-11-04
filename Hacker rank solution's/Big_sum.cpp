#include<bits/stdc++.h>
using namespace std;


int main() {

    int x;
    long long int summation=0;
    vector<int>v1;

    cin >> x;

    while(x--) {
        int y ;
        cin >> y;
        v1.push_back(y);

       //summation = summation + v1[x];
        //x--;
    }

    for(int i =0 ; i< v1.size(); i++) {
       esummation = summation + v1[i];
        //cout << v1[i] << " ";
    }
     cout << summation << endl;

    return 0;
}
