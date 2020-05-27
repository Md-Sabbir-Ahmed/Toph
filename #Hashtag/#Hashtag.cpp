#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n;
    getline(cin,n);
    for(int i=0;i<n.size();i++)
    {
    	if(n[i]!=' ')
    	{
    		cout<<n[i];
    	}
    }
    return 0;
}

