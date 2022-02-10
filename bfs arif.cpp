#include <bits/stdc++.h>
using namespace std;

vector<int>graph[10000+7];
bool vis[10000+7];
int lvl[10000+7];

void bfs(int node){
    vis[node] = true;
    lvl[node] = 0;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++){  //finding out all nodes connected to 'u'
            int v = graph[u][i];
            if(vis[v]==false){
                vis[v] = true;    //if not visited, just visiting that
                lvl[v] = lvl[u]+1;  //adding distance
                q.push(v);
            }
        }
    }
}

int main()
{
    int node, edge; cin>>node>>edge;  //taking numbers of node and edge as input

    for(int i=0; i<edge; i++){
        int u, v; cin>>u>>v;    //making list (connection)
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs(1);
    for(int i=1; i<=node; i++){
        cout<<i<<" Level = "<<lvl[i]<<endl;
    }
    return 0;
}


/**
node, edge: 5 5

1 2
1 3
2 3
2 4
3 5
**/

//specific ekta node(root) theke baaki node der distance ber kori

