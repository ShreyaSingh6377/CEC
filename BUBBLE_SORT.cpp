#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:\n";;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubbleSort(arr,n);
    return 0;
}
