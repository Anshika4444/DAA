#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binarysearch(vector <int> ar,int l,int r,int key)
{
    int mid,j=0;
    if(l<=r)
    {
        mid=l+(r-l)/2;
        j++;
    if(ar[mid]==key)
        return j;
    else if(ar[mid]<key)
        return binarysearch(ar,mid+1,r,key);
    else
        return binarysearch(ar,l,mid-1,key);
    }
    else
        return -1;


}
int main()
{
    int s,n,key;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>s;
        vector <int> arr(s);
        for(int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cin>>key;
        int flag= binarysearch(arr,0,s-1,key);
        if(flag==-1)
            cout<<"not present";
        else
            cout<<"present"<<flag;
    }

}
