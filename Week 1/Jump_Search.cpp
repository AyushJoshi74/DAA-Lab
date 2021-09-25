#include<iostream>
#include<cmath>
using namespace std;

void jump(int arr[],int n,int key)
{
    int count=0,flag=0,prev=0;
    int jump=sqrt(n);
    if(arr[0]>key || arr[n-1]<key)
    {
        count++;
        flag=0;
    }

    else
    {
        while (arr[jump]<=key && jump<n)
        {
            count++;
            prev=jump;
            jump=jump+sqrt(n);
            if(jump > n-1)
            {
                jump=n;
                break;
            }
        }
        
        for(int i=prev;i<jump;i++)
        {
            if(arr[i]==key)
            {
                count++;
                flag=1;
                break;
            }
            else
            {
                count++;
            }
        }
    }

    if(flag==1)
    {
        cout<<"Present "<<count<<endl;
    }
    else
    {
        cout<<"Not Present "<<count<<endl;
    }

}

int main()
{
    int t,n,key;
    cin>>t;             //Enter the number of test cases
    for(int i=0;i<t;i++)
    {
        cin>>n;             //Enter the size of the array
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];            //Enter the array
        }
        cin>>key;           //Enter the number to find
        jump(arr,n,key);
    }
}