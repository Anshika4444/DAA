#include<bits/stdc++.h>
using namespace std;
void countSort(vector<char>&v,int &max,char &rak)
{
    vector<int>count(256,0);
    for(int i=0;i<v.size();i++)
    {
        int c=v[i];
        count[c]++;
        if(max<count[c])
        {
            max=count[c];
            rak=c;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s,max=0;
        char rak;
        cin>>s;
        vector<char>v;
        for(int j=0;j<s;j++)
        {
            char ch;
            cin>>ch;
            v.push_back(ch);
        }

        countSort(v,max,rak);
       if(max<=1)
        cout<<"No duplicates found"<<endl;
       else
        cout<<rak<<"-"<<max<<endl;
    }
}
