#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string  A;
    cin>>A;
    int x,y,z;
    x=A.size();

    for (int i=0; i<x; i++)
    {
    if ((x-i) % 3 == 0 && i > 0)
    {
        cout << ",";
    }

        cout << A[i];

    }

    return 0;
}


