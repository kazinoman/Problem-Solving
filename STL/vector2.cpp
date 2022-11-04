#include<bits/stdc++.h>
using namespace std;


int main() {
    // demo vector ;

    vector <int> arr = {12,23,23,23,3,43,45};

    cout << arr.size() << endl;

    arr.push_back(23);
    arr.pop_back();

    // capacity
    cout << arr.capacity() << endl;

    // print arr
    for(int i =0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
