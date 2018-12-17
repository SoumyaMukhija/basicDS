//SELECTION SORT O(n^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[10];
    cout<<"Enter 10 elements:";
    for(int i=0; i<10; ++i)
        cin>>arr[i];
    for(int i=0; i<9; ++i)
    {
        for(int j=i+1; j<10; ++j)
        {
            if(arr[i]>arr[j])
                swap(arr[i], arr[j]);
        }
    }
    for(int i=0; i<10; ++i)
        cout<<arr[i]<<" ";
}
