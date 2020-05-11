#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Y;
    cin>>Y;
    if((Y%4==0) && (Y%400!=0))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}


