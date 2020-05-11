#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin>>S;
    int a=0;
    int x=S.size()-1;

    while (x>1)
    {
        if (S[a++] != S[x--])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}


