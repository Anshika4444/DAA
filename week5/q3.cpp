#include<bits/stdc++.h>
using namespace std;
void common(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int m,n;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
        sort(arr1,arr1+m);
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
        sort(arr2,arr2+n);
    common(arr1,arr2,m,n);
}
