#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
void countSort(char a[],int s)
{
    int count[ASCII_SIZE]={0};
    int max=0;
    char res;
    for(int i=0;i<s;i++)
    {
        int c=a[i];
        count[c]++;
        if(max<count[c])
        {
            max=count[c];
            res=c;
        }
    }
    if(max<=1)
        cout<<"No duplicates found"<<endl;
       else
        cout<<res<<"-"<<max<<endl;

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        char a[s];
        for(int j=0;j<s;j++)
        {
            cin>>a[j];
        }
        countSort(a,s);
    }
}

