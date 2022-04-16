#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r);
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
void merge(int a[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int b[r+1];
    while(i<=mid && j<=r)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=l;k<=r;k++)
    {
        a[k]=b[k];
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
        bool flag=false;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mergesort(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i-1])
            flag=true;
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
