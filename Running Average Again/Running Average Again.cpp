#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    float a,sum=0,x=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        sum=sum+a;
        x++;
        cout<<sum/x<<"\n";
    }
    return 0;
}


