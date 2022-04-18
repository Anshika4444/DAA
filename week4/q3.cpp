#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        priority_queue<int>pq;
        int s;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            pq.push(arr[j]);
        }
        for(int j=k;j<s;j++)
        {
            if(arr[j]<pq.top())
            {
                pq.pop();
                pq.push(arr[j]);
            }
        }
        cout<<pq.top()<<endl;
    }
}
