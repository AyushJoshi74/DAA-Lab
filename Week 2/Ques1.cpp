#include<iostream>
using namespace std;

void binary(int arr[],int n,int key)
{
    int low=0,high=n-1,mid,count=0,flag=0;
    while(low<=high)
    {
        mid=low+(high-1)/2;
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                count++;
            }
        }
        cout<<key<<" - "<<count<<endl;
    }
    else
    {
        cout<<"Key not present"<<endl;
    }
}

int main()
{
    int t,n,key;
    cin>>t;             //Enter the number of test cases
    for(int i=0;i<t;i++)
    {
        cin>>n;         //Enter the size of the array
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];        //Enter the array
        }
        cin>>key;           //Enter the number to be found
        binary(arr,n,key);
    }
    return 0;
}