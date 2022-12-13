#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    int a=0,b=1,c;
    cout<<"Enter n:";
    cin>>n;
    
    cout<<"Fibonacci Series:\n";
    while(i<n)
    {
        sum+=a;
       cout<<a<<" ";
       c=a+b;
       a=b;
       b=c;
       i++;
    }
    cout<<"\nSum of fibonacci series:\n"<<sum;
}
