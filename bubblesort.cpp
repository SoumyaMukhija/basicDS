#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[10], i ,j, k;
    cout<<"Enter 10 elements:";
    for( i=0; i<10; ++i)
        cin>>arr[i];
    for(k=0; k<10; ++k)
    {
        for( i=0, j=1; i<9, j<10; ++i, ++j)
        {
            if(arr[i]>arr[j])
                swap(arr[i], arr[j]);
        }
    }
    for( i=0; i<10; ++i)
        cout<<arr[i]<<" " ;
}
