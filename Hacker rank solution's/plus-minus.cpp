#include<bits/stdc++.h>
using namespace std;

int main() {
    double p=0.0, n=0.0, nu=0.0;
    int x;
    cin >> x;
    int ar[x];
    double y = x;
    while(x--) {
        int j;
        cin >> j;
        if(j >0) p++;
        else if(j < 0 ) n++;
        else nu++;
    }

    double pos, neg, nut;

    pos = p/y;
    neg = n/y;
    nut = nu/y;
    printf("%.6f\n%.6f\n%.6f",pos , neg , nut);

    return 0;
}
