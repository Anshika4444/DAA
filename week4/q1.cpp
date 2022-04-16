#include<iostream>
using namespace std;
void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++)
        M[j]=arr[q+1+j];
    int i=0,j=p,k=0;
    while(i<n1 && k<n2)
    {
        if(L[i]<=M[k])
        {
             arr[j]=L[i];
             i++;
        }
        else
        {
            arr[j]=M[k];
            k++;
        }
            j++;
    }
    while(i<n1)
        {
            arr[j]=L[i];
            i++;
            j++;
        }
    while(j<n2)
    {
        arr[j]=M[j];
        j++;
        k++;
    }
}
int mergesort(int arr[],int l,int r)
{
    static int c=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);

        mergesort(arr,m+1,r);

        merge(arr,l,m,r);
    }
    return c;
}

int main()
{
    int n,s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        int ct= mergesort(arr,0,s-1);
        for(int i=0;i<s;i++)
            cout<<arr[i]<<" ";
        cout<<"comparison="<<ct;
    }
    return 0;
}
