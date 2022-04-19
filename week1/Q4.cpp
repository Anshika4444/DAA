#include<iostream>
using namespace std;
int binarySearch(int ar[],int l,int r,int key)
{
    int mid;
    if(l<=r)
    {

        mid=l+(r-l)/2;
        if(ar[mid]==key)
            return mid;
        else if(ar[mid]<key)
            return binarySearch(ar,mid+1,r,key);
        else
            return binarySearch(ar,l,mid-1,key);
    }

    return -1;
}
int exponentialSearch(int arr[],int n,int key)
{
    if (arr[0] == key)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= key)
    {
        i = i * 2;
    }
    return binarySearch(arr, (i/2), min(i, n-1), key);

}


int main()
{
    int n,s,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        int flag=exponentialSearch(arr,s,key);
        if(flag==-1)
            cout<<"not present";
        else
            cout<<"present";
    }
}

