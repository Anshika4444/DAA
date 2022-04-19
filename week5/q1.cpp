#include<bits/stdc++.h>
using namespace std;
void countSort(vector<char>&v)
{
    vector<int>count(256,0);
    int max=0;
    char res;
    for(int i=0;i<v.size();i++)
    {
        int c=v[i];
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
        vector<char>v;
        for(int j=0;j<s;j++)
        {
            char ch;
            cin>>ch;
            v.push_back(ch);
        }
        countSort(v);      
    }
}
