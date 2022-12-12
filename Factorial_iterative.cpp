#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"Enter n:\t";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial:\t"<<fact;
}
