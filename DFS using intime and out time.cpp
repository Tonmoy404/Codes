#include <bits/stdc++.h>
using namespace std;

vector<int>graph[1000+7];
int in[10007], out[10007];
int tme = 1;

void dfs(int par){
    if(in[par]==0){
        in[par] = tme;
        ++tme;
    }

    for(int i=0; i<graph[par].size(); i++){
        int v = graph[par][i];
        if(in[v]==0){
            dfs(v);
        }
    }

    out[par] = tme;
    ++tme;
}

int main(){

    cout<<"Enter number of nodes and edges: ";
    int node, edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    memset(in, 0, sizeof(in));
    dfs(1);

    for(int i=1; i<=node; i++){
        cout<<"In time of "<<i<<" node is "<<in[i]<<" & out time "<<out[i]<<endl;
    }

    return 0;
}

/** node , edge = 8 7

1 2
2 4
2 5
4 7
1 3
3 6
6 8
*/

/**
In time of 1 node is 1 & out time 16
In time of 2 node is 2 & out time 9
In time of 3 node is 10 & out time 15
In time of 4 node is 3 & out time 6
In time of 5 node is 7 & out time 8
In time of 6 node is 11 & out time 14
In time of 7 node is 4 & out time 5
In time of 8 node is 12 & out time 13

*/
