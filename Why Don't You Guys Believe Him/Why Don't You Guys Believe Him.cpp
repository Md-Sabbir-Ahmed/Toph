#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x,a,sum=0;
    cin>>n>>x;
    while(n--)
    {
        cin>>a;
        sum=sum+a;
    }
    if(sum>x) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";

    return 0;
}


