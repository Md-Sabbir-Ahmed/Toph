#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    int k=y%x;
    cout<<x-k;
    return 0;
}

