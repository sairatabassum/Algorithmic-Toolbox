#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    if(n==1)
        cout<<v[0]<<endl;
    else
        ///After sorting maximum product by 2 big numbers in array
        cout<<v[n-1]*v[n-2]<<endl;




}
