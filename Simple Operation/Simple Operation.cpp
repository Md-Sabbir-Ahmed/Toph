#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,n,i=0;
    string s;
    cin>>n;
    while(n--)
    {
        i=i+1;

    cin>>a>>s>>b;

    if(s=="+")
    {
        cout<<"Case "<<i<<": "<<a+b<<"\n";
    }
    else if(s=="-")
    {
        cout<<"Case "<<i<<": "<<a-b<<"\n";
    }
    else if(s=="*")
    {
        cout<<"Case "<<i<<": "<<a*b<<"\n";
    }

    }
    return 0;
}


