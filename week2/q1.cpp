#include<bits/stdc++.h>
using namespace std;
void searchKey(int arr[],int low,int high,int key)
{
    int start=-1,end=-1,temp,ans,mid,M;
    bool flag=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            M=mid;
            temp=mid;
            while(mid>0 && arr[mid]==key)
                mid--;
            start=mid;
            while(temp<high && arr[temp+1]==key)
                temp++;
            end=temp;
            flag=true;
            ans=end-start;
            break;
        }
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    if(flag)
    {
        cout<<arr[M]<<"-"<<ans<<endl;
    }
    else
        cout<<"Key not present";
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
            cin>>arr[j];
        cin>>key;
        searchKey(arr,0,s-1,key);
    }
return 0;
}

