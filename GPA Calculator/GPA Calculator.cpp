#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,i=0;
    cin>>t;
    float sum=0,gpa=0,a,temp;
    while(t--)
    {
        int n;
        cin>>n;
        i=i+1;
        temp=(float)n;
        while(n--)
        {
            cin>>a;
            sum=sum+a;
        }
        gpa=sum/temp;
        printf("Case %d: %.3f",i,gpa);
        printf("\n");
        temp=0;gpa=0;sum=0;
    }

    return 0;
}


