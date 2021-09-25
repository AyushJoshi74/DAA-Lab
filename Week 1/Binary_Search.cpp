

#include<iostream>
using namespace std;

void binary(int arr[],int n,int key)
{
    int low=0,high=n-1,mid,count=0;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            cout<<"Present "<<count+1<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
            count++;
        }
        else
        {
            high=mid-1;
            count++;
        }
    }
    if(high<low)
    {
        cout<<"Not Present"<<endl;
    }

}

int main()
{
    int t,key,n;
    cin>>t;              //Enter no of test cases
    for(int j=0;j<t;j++)
    {
        cin>>n;         //Enter the size of array
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];        //Enter the array
        }
        cin>>key;               //Enter the number to be found
        binary(arr,n,key);
    }    
    return 0;

}