#include<iostream>
using namespace std;
void binarysearch(int ar[],int l,int r,int key)
{
    int mid,cp=0;
    bool flag=0;
    while(l<=r)
    {
        cp++;
        mid=l+(r-l)/2;
        if(ar[mid]==key)
        {
            flag=1;
            break;
        }
        else if(ar[mid]<key)
            l=mid+1;
        else
            r=mid-1;
    }
    if(flag)
        cout<<"Present "<<cp;
    else
        cout<<"Not Present "<<cp;

}
int main()
{
    int s,n,key;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        binarysearch(arr,0,s,key);
    }
    return 0;
}
