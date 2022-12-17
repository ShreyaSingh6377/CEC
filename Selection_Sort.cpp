/*Selection Sort:Find the minimum element in unsorted array and
swap it with element at beginning*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    int arr[n],i,min,j,temp;
    cout<<"Enter the array:\n";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                min=j;
            }
            if(min!=i)
            {
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
    }
    cout<<"The sorted array:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
