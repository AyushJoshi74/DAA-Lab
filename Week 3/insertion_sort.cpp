#include<iostream>

using namespace std;

int comp=0;
int swp=0;

void insertion(int arr[], int n)
{
    int i, j, t;
    for (i = 1; i < n; i++)
    {
        t = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>t)
        {
            arr[j+1]=arr[j];
            j=j-1;
            comp++;
        }
        arr[j+1]=t;
        swp++;
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

        insertion(arr,n);
        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons = "<<comp<<endl;
        cout<<"shifts = "<<swp+comp;

    }

    return 0;
}