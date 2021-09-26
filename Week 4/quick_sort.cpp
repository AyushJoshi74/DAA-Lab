#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr,int left, int right)
{
    int pivot = arr[left];
    int start = left, end = right ;

    while(start<end)
    {
        while(arr[start]<= pivot)
        {
            start++;
        }

        while(arr[end]> pivot)
        {
            end--;
        }

        if(start<end)
        {
            swap(&arr[start],&arr[end]);
        }
    }

    swap(&arr[left],&arr[end]);

    return end;
} 

int partition_random(int *arr,int left,int right)
{
    int random = left + rand()%(right - left);
    swap(&arr[random],&arr[left]);
    return partition(arr,left,right);
} 

void quickSort(int *arr, int left, int right)
{
    if(left<right)
    {
        int loc = partition_random(arr,left,right);
        quickSort(arr,left,loc-1);
        quickSort(arr,loc+1,right);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        quickSort(arr,0,n-1);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}