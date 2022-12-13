#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n,i=0,sum=0;
    cout<<"Enter n:";
    cin>>n;
    cout<<"\nFibonacci Series:\n";
    while(i<n)
    {
        cout<<fib(i)<<" ";
        i++;
        sum+=fib(i-1);
    }
    cout<<"\nSum of fibonacci series:\n"<<sum;
}
