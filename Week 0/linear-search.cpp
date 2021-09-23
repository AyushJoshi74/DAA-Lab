#include<iostream>
using namespace std;

void linear(int arr,int n,int key)
{
    int i,flag=0,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            count++;
            break;
        }
        else
            count++;
    }
    if(flag==1)
        cout<<"Present "<<count<<endl;
    else
        cout<<"Not Present "<<count<<endl;
}

int main()
{
    int arr[100],n,key,i,j,t;
    cin>>t;

    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cin>>key;
        
        linear(arr,n,key);
    }
    return 0;
}