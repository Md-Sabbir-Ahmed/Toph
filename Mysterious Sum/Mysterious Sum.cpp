#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,k=0;
    cin>>t;
    while(t--)
    {
        k=k+1;
        int a,b,i,j;
        cin>>a>>b;
        i=a+b;
        j=a-b;
        printf("Case %d: %d%d\n",k,i,j);
    }

    return 0;
}


