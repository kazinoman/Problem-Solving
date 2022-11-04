#include<bits/stdc++.h>
using namespace std;

void checkCustomerPreferences();

int main () {
    checkCustomerPreferences();
    return 0;
}

void checkCustomerPreferences() {
    int al=0, gs=0, di=0;

jump:
    int n;
    cin >> n;

    if(n == 1) {
        al += 1;
        goto jump;
    } else if(n == 2) {
        gs += 1;
        goto jump;
    } else if(n == 3) {
        di+= 1;
        goto jump;
    } else if(n == 4) {
        cout << "MUITO OBRIGADO" << endl;
        cout << "Alcool: " << al<<endl;
        cout << "Gasolina: "<< gs <<endl;
        cout << "Diesel: "<< di<<endl;
    } else {

        goto jump;
    }
}
