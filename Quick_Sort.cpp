#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j;
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[j]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
    int p;
    p=partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[]={2,5,1,4};
    quickSort(arr,0,3);
   
    cout << "Sorted array: \n";
    printArray(arr, 4);
     return 0;
}
