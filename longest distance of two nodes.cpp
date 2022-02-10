#include <bits/stdc++.h>
#define ii pair<int, int>
#define ff first
#define ss second
#define pb push_back
using namespace std;

vector<ii>graph[1000+7];
int dis[1000];

const int neg = INT_MIN;
int in[1000], out[1000];
int tme = 1;

void dfs(int node){
    if(in[node]==0){
        in[node] = tme;
        ++tme;
    }

    for(int i=0; i<graph[node].size(); i++){
        int u = graph[node][i].ff;
        int w = graph[node][i].ss;

        if(in[u]==0){
            dis[u] = w + dis[node];
            dfs(u);
        }
    }

    out[node] = tme;
    ++tme;

}


int main(){

    for(int i=0; i<1000; i++){
        dis[i] = neg;
    }
//    memset(dis, 0, sizeof(dis));

    int node, edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u, v, w;
        cin>>u>>v>>w;
        graph[u].pb(ii(v,w));
        graph[v].pb(ii(u,w));
    }

    memset(in, 0, sizeof(in));
    dis[1] = 0;
    dfs(1);

    for(int i=1; i<=node; i++){
        cout<<"Intime of node "<<i<<" is "<<in[i]<<endl;
        cout<<"Outtime of node "<<i<<" is "<<out[i]<<endl;
    }
//
    int ans = INT_MIN, idx=0;
    for(int i=1; i<=node; i++){
//        cout<<"Node -> "<<i<<"-> "<<dis[i]<<endl;
        if(ans<dis[i]){
            ans = dis[i];
            idx = i;
        }
    }




    memset(dis, 0, sizeof(dis));
    memset(in, 0, sizeof(in));
    memset(out, 0, sizeof(out));
    dis[idx] = 0;

    dfs(idx);

    int ans2= INT_MIN, idxx=0;
    for(int i=1; i<=node; i++){
        if(ans2<dis[i]){
            ans2 = dis[i];
            idxx = i;
        }
    }

    cout<<"Longest nodes are: "<<idx<<" and "<<idxx<<endl;








    return 0;
}


/***

10 9
10 9 1
9 8 1
8 1 1
1 2 1
2 4 1
2 5 2
1 3 4
3 7 3
7 6 1

*/
