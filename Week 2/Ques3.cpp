#include<iostream>
#include<cmath>
using namespace std;

void difference(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==k)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main()
{
    int t,n,k;
    cin>>t;             //Enter the number of test cases
    for(int i=0;i<t;i++)
    {
        cin>>n;         //Enter the size of the array
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];        //Enter the array
        }
        cin>>k;             //Enter the difference
        difference(arr,n,k);
    }
    return 0;
}