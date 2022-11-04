#include<bits/stdc++.h>
using namespace std ;


void printVector (vector<int> v);


int main()
{
    vector<int> v;
    int n;
    cin >> n;
  // input in vector;
    for(int i = 0; i<n ; i++)
    {
        int vI;
        cin >> vI;
        v.push_back(vI);
    }
    printVector(v);

    return 0;
}

// print the vector;
void printVector (vector<int> v)
{
    cout <<"Vector size is: " <<v.size() << endl;
    for(int i= 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
