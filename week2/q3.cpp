#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,c,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        c=0;
        cin>>key;
        sort(arr,arr+s);
        for(int i=0;i<s;i++)
        {
            int l=i;
            int h=s-1;
            while(l<h)
            {
                if(arr[h]-arr[l]==key)
                {
                    c++;
                    l++;
                    h--;
                }
                else if(arr[h]-arr[l]>key)
                    h--;
                else
                    l++;
            }
        }
        cout<<c<<endl;
    }
}
