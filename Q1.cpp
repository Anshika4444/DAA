#include<iostream>
using namespace std;
int main()
{
    int n,s,key,flag;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        flag=0;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        for(int k=0;k<s;k++)
        {
            if(key==arr[i])
                flag=1;
        }
        if(flag==1)
                cout<<"present";
            else
                cout<<"not present";
    }
}
