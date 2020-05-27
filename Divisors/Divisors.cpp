#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<1<<"\n";
    for(int i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		cout<<i<<"\n";
    	}
    }
    cout<<n<<"\n";
    return 0;
}

