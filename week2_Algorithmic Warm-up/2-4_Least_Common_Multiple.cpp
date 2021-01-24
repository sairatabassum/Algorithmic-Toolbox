#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    ///If a = b*q + r and b≠0 then GCD(a,b) = GCD(b,r)
    /// where q is an integer, r is a remainder
    return gcd(b,a%b);

}
int main()
{
    long long int a,b;
    cin>>a>>b;
    ///lcm= (a*b)/gcd(a,b)
    cout<<(a*b)/(gcd(a,b))<<endl;
}

