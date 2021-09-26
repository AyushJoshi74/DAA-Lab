#include<iostream> 
#include<algorithm>
using namespace std;

bool comp(int a , int b)
{
    return a<b;
}

void duplicate(char arr[], int n )
{
    int count[26]={0};
    char ch;

    for(int i=0;i<n;i++)
    {
        count[arr[i]-'a']++;
    }

    int max = *max_element(count,count+26,comp);

    if(max==1 || max==0)
        cout<<"No duplicates";
    else
        {
            cout<<"duplicates having max freq:"<<endl;
            for(int i=0;i<26;i++)
            {
                if(max==count[i])
                {
                    char k = 'a'+i;
                    cout<<k<<":"<<max<<endl;
                }
            }
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
        char arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        duplicate(arr,n);
    
    }
    return 0;
}