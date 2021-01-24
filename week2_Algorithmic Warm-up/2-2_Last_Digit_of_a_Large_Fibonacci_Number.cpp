#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    ///Store fibonacci number's last digit
    vector<long long int>v;
    v.push_back(0);
    v.push_back(1);

    for(int i=2; i<=n; i++)
    {
        ///Mod 10,store last digit of fibonacci number
        x=(v[i-1]+v[i-2])%10;
        v.push_back(x);
    }
    cout<<v[n]<<endl;


}
