#include<bits/stdc++.h>
using namespace std;

void sumOfArray(vector<int> &v1);
int main() {
    int x;
    cin >> x;
    vector<int>v1;

    for(int i = 0 ; i< x; i++) {
        int y;
        cin >> y;

        v1.push_back(y);
    }

    sumOfArray(v1);
    return 0;
}

void sumOfArray(vector<int> &v1) {
    int sum = 0;
    for(int i =0; i< v1.size(); i++){
        sum += v1[i];
    }
    cout << sum << endl;

}
