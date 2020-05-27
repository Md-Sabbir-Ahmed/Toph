#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n;
    getline(cin,n);
    int k=n.size();
    for(int i=k-1;i>=0;i--)
    {
    	cout<<n[i];
    }
    return 0;
}

