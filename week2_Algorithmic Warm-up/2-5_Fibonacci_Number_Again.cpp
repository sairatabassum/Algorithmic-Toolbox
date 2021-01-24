#include <bits/stdc++.h>
using namespace std;
/*
This problem is related to Pisano period. The period always
starts with 01. Fn/Fm if and only if n/m.
In number theory, the nth Pisano period, written π(n), is the period
with which the sequence of Fibonacci numbers taken modulo n repeats.
π(n), is the length of the period of this sequence.We have to find the length of this sequence and
store the sequence value which is modulo by m.
*/
int main()
{
    long long int n,m,a,b,c,in,rem;
    cin>>n>>m;
    ///Store sequence modulo value
    vector<long long int>v;

    v.push_back(0);
    v.push_back(1);

    a=0,b=1,in=0;


    for(int i=0; i<m*m; i++)
    {
        ///a,b,c=a+b
        c=(a+b)%m;
        v.push_back(c);
        a=b;
        b=c;

        ///If previous and current value is 0,1
        ///Period always starts with 01
        if(a==0&&b==1)
        {
            in=i+1;
            break;
        }
    }
    ///Remainder of n by length of sequence
    rem=n%in;
    cout<<v[rem]<<endl;



}

