#include<iostream>
using namespace std;
int main()
{
    int n,s,key;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        int flag=0,cp=0;
        for(int k=0;k<s;k++)
        {
            cp++;
            if(key==arr[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
                cout<<"present "<<cp;
            else
                cout<<"not present "<<cp;
    }
    return 0;
}
