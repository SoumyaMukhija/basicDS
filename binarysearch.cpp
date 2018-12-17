#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int low, int high)
{
    if(high>=1)
    {
        int mid=(low+high)/2;
        if(arr[mid]==n)
            return mid;
        else if (n<arr[mid])
        {
            return binarysearch (arr, n, low, mid-1);
        }
        return binarysearch (arr, n, mid+1, high);
    }
    return -1;
}
int main()
{
    cout<<"Enter 10 elements:";
    int arr[10];
    for(int i=0; i<10; ++i)
        cin>>arr[i];
    for(int i=0; i<9; ++i)
    {
        for(int j=i+1; j<10; ++j)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    cout<<"\nThe sorted array is:";
    for(int i=0; i<10; ++i)
        cout<<arr[i]<<endl;
    cout<<"\n Enter the element that has to be searched:";
    int elem;
    cin>>elem ;
    int low=0;
    int high=9;
    int mid=(high+low)/2;
    int x= binarysearch(arr, elem, low, high);
    if(x==-1)
        cout<<"Element not present in the array";
    else
        cout<<"Element found at index:"<<x+1;

}
