#include<bits/stdc++.h>
using namespace std;
const int N=5;
vector<int>g[N];
 bool haspath(int source,int destination, vector<bool>&visited)
    {
        if(source==destination)return true;
        visited[source]=true;
        for(auto child:g[source])
        {
            if(!visited[child])
            {
               bool ans= haspath(child,destination,visited);
                if(ans)return true;
            }
        }
        return false;
    }

int main()
{
    int m,n;
    cin>>n>>m;
     for(int i=0;i<m;i++)
     {
         int v1,v2;
         cin>>v1>>v2;
         g[v1].push_back(v2);
         g[v2].push_back(v1);
     }
 int s,d;
 cin>>s>>d;
 vector<bool>visited(n);
 if(haspath(s,d,visited))cout<<"YES path exist";
 else cout<<"No path exist";
}
