#include<bits/stdc++.h>
using namespace std;
void findPair(int arr[],int s,int target)
{
    sort(arr,arr+s);
    int low=0;
    int high=s-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==target)
        {
            cout<<arr[low]<<" "<<arr[high];
            return;
        }
        (arr[low]+arr[high]<target)?low++:high--;
    }
    cout<<"no such element exist";
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        int target;
        cin>>target;
        findPair(arr,s,target);
    }
}
