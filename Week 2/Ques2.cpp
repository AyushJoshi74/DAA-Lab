#include<iostream>
using namespace std;

void sum_index(int arr[],int n)
{
    int a,b,c,flag=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    flag=1;
                    a=i; b=j; c=k;
                    break;
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<b+1<<", "<<a+1<<", "<<c+1<<endl;
    }
    else
    {
        cout<<"No sequence found"<<endl;
    }
}

int main()
{
    int t,n;
    cin>>t;             //Enter the number of test cases
    for(int i=0;i<t;i++)
    {
        cin>>n;         //Enter the size of the array
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sum_index(arr,n);
    }
    return 0;
}