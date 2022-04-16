#include<bits/stdc++.h>
using namespace std;
void jumpSearch(int arr[],int n,int key)
{
    int c=1,flag=0;
    int start=0;
    int end = sqrt(n);
    while(arr[end]<=key && end<n)
    {
        c++;
        start=end;
        end+=sqrt(n);
        if(end>n-1)
            end=n;
    }
    for(int i=start;i<end; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
            cout<<"Present "<<c;
        else
            cout<<"Not present "<<c;
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
        jumpSearch(arr,s,key);

    }
}

