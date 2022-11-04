#include<bits/stdc++.h>
#include<utility>
using namespace std;


int main()
{

// PAIR section.
    pair<int, string> pair1;

    pair1.first = 1 ;
    pair1.second = "Hello";

    int a;
    string b;
    tie(a, b)= pair1;
    cout << a <<" "<< b << endl;


    pair<int , pair<string , int>>pair2 {1,{"asf", 12}};


    cout << pair2.first << pair2.second;


    return 0;

}
