#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ar[n+1];
    ar[0]=0;
    ar[1]=1;
    for(int i=2; i<=n; i++)
    {
        ///Sum of previous two numbers
        ar[i]=ar[i-1]+ar[i-2];
    }
    cout<<ar[n]<<endl;

}
