#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,el,key,x,mid;
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements in sorted order(ascending):";
    for(i=0;i<n;i++)
    {
        cin>>el;
        vec[i]=el;
        
    }
    cout<<"Enter key:";
    cin>>key;
    int low=0,high=n-1;
    while(high>=low)
    {
        mid=low+(high-low)/2;
        if(vec[mid]==key)
        cout<<"Key found at position:"<<mid+1;
        if(vec[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    
}
