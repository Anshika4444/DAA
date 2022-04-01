#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int jumpSearch(vector <int> arr,int n,int key)
{
    int start=0;
    int end = sqrt(n);
    while(arr[end]<=key && end<n)
    {
        start=end;
        end+=sqrt(n);
        if(end>n-1)
            end=n;
    }
    for(int i=start;i<end; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int n,s,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        vector <int> arr(s);
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        cin>>key;
        int flag=jumpSearch(arr,s,key);
        if(flag==-1)
            cout<<"not present";
        else
            cout<<"present"<<flag;
    }
}

