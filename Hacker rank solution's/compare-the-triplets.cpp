#include<bits/stdc++.h>
using namespace std;

void compareAliceAndBob(vector<int> &alice, vector<int> &bob);

int main() {

    vector<int>alice;
    vector<int>bob;

    for(int i = 0; i<3; i++) {
        int x;
        cin >> x;
        alice.push_back(x);
    }

    for(int i = 0; i<3; i++) {
        int x;
        cin >> x;
        bob.push_back(x);
    }
    compareAliceAndBob(alice, bob);

    return 0;
}

void compareAliceAndBob(vector<int> &alice, vector<int> &bob) {

    int alicePoint=0, bobPoint=0;

    for(int i =0; i < 3; i++) {
        if(alice[i] > bob[i]) {
            alicePoint+=1;
        } else if( alice[i] < bob[i]) {
            bobPoint+=1;
        }
    }

    cout << alicePoint << " " << bobPoint << endl;
}
