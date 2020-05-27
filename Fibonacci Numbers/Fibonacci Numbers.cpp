#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,first=0,second=1,now=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
    	now=first+second;
    	first=second;
    	second =now;
    }
    cout<<now;
    return 0;
}

