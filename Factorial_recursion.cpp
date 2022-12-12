#include<iostream>
using namespace std;
int fact=1;
int factorial(int n)
{
    if(n==1)
    return n;
    fact=fact*n;
    factorial(n-1);
    return fact;
}
int main()
{
    cout<<factorial(4);
}
