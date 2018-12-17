#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[10], curr;
    cout<<"Enter 10 elements:";
    for(int i=0; i<10; ++i)
    {
        cin>>arr[i];
    }
    for(int i=0; i<9; ++i)
    {
        for(int j=i+1; j<10; ++j)
        {
            if (arr[j]<arr[i])
            {
                curr=arr[j];
                for(int k=j; k>=i; --k)
                {
                    arr[k]=arr[k-1];
                }
                arr[i]=curr;
            }
        }
    }
    for(int i=0; i<10; ++i)
        cout<<arr[i] << " " ;
}
