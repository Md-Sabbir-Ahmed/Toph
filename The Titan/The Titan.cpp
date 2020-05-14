#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,sq=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sq=sq+i*i;
    }
    cout<<sq;
    return 0;
}


