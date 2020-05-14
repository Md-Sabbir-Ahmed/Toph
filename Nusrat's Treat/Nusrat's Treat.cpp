#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k,sum=0;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    cout<<sum;

    return 0;
}


