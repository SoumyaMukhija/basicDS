#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int i, j ;
    cout<<"Enter 10 elements:";
    for(i=0; i<10 ; ++i)
        cin>>arr[i];
    cout<<"Enter the element that has to be searched:";
    int elem;
    cin>>elem;
    for(i=0; i<10; ++i)
    {
        if(arr[i]==elem)
        {
            cout<<"Element found at index "<<i+1;
            break;
        }
    }
}
