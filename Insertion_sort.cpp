/* Insertion Sort  :  Insert an element from unsorted array to its 
correct position in sorted array*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    int arr[n],i,min,j,t;
    cout<<"Enter the array:\n";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=1;i<n;i++)
    {
        t=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>t)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    cout<<"The sorted array:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
