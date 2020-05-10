#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,maximum=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>maximum)
        {
            maximum=a;
        }

    }
    cout<<maximum;

    return 0;
}


