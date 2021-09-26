#include<iostream>

using namespace std;

int comp=0;
int swp=0;


void selection(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
                comp++;
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        swp++;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        comp=0;
        swp=0;
        selection(arr, n);
        for (int i=0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout<<"comparisons: "<<comp<<endl;
        cout<<"swap: "<<swp<<endl;
    }
    
    return 0;
}