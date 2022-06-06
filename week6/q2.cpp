#include <bits/stdc++.h>
using namespace std;
bool isBipartite(vector<int> adj[],int V)
{
    vector<int> col(V, -1);
    queue<pair<int, int> > q;
    for (int i = 0; i < V; i++) {
        if (col[i] == -1) {
            q.push({ i, 0 });
            col[i] = 0;

            while (!q.empty()) {
                pair<int, int> p = q.front();
                q.pop();
                int v = p.first;
                int c = p.second;
                for (int j : adj[v]) {
                    if (col[j] == c)
                        return 0;
                    if (col[j] == -1) {
                        col[j] = (c) ? 0 : 1;
                        q.push({ j, col[j] });
                    }
                }
            }
        }
    }
    return 1;
}

int main()
{
    int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	}

	if(isBipartite(adj, n)) {
	    cout << "Yes Bipartite";
	} else {
	    cout << "Not Bipartite";
	}
	return 0;
}

