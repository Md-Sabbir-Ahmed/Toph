#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int a,i,k=0;
    a=s.size();
    for(i=0;i<a;i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u')
        {
            k++;
        }
        else if(s[i]=='A'|| s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U')
        {
            k++;
        }

    }
    cout<<k<<"\n";
    return 0;
}


