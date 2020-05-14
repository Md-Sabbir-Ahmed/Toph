#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,j;
    string a;
    cin>>t;
    cin>>a;

    for(j=0;j<t-1;j++)
    {
        if(a[j]==a[j+1])
        {
            cout<<"Change needed"<<"\n";
            return 0;
        }

    }
   cout<<"No change needed"<<"\n";

    return 0;
}


