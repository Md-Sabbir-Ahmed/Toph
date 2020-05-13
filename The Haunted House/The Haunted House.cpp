#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=s.size();
        int w=k/2;
        for(int i=w-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<"\n";
    }

    return 0;
}


