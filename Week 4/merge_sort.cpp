#include<iostream>

using namespace std;
int merge(int *arr,int left, int mid, int right)
{
    int i=left, j = mid+1, k=left;
    int b[100], count=0;

    while(i<=mid && j<=right)
    {
        if(arr[i]< arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            count+=mid+1-i;
            j++;
        }
        k++;
    }

    if(i>mid)
    {
        while(j<=right)
        {
            b[k]=arr[j];
            k++;
            j++;
        }
    }

    if(j>right){
        while(i<=mid)
        {
            b[k]=arr[i];
            k++;i++;
        }
    }

    for(i=left;i<=right;i++)
    {
        arr[i]=b[i];
    }

    return count;
}
int merge_sort(int *arr, int left,int right)
{
    int count=0;
    if(left<right)
    {
        int mid = left+(right-left)/2;
        count+=merge_sort(arr,left,mid);
        count+=merge_sort(arr,mid+1,right);
        count+=merge(arr,left,mid,right);
    }
    return count;
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

        cout<<"inversions: "<<merge_sort(arr,0,n-1)<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

    }

    return 0;
}