#include <bits/stdc++.h>
#define ii pair<int, int>
#define iii pair<int, ii>
#define ff first
#define ss second
using namespace std;
vector<iii>graph;
int par[100];

int find_parent(int x){
    if(par[x]==x) return x;
    return find_parent(par[x]);
}

int Kruskal(){
    int minCost = 0;
    int sizee = graph.size();

    for(int i=0; i<sizee; i++){
        int u = graph[i].ss.ff;
        int v = graph[i].ss.ss;

        int u_parent = find_parent(u);
        int v_parent = find_parent(v);

        if(v_parent != u_parent){
            minCost += graph[i].ff;
            par[v_parent] = par[u_parent];
        }
    }

    return minCost;

}

int main(){
    int normalCost = 0;
    int node, edge; cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int u, v, w; cin>>u>>v>>w;
        normalCost += w;
        graph.push_back(iii(w,ii(u,v)));
    }
    sort(graph.begin(), graph.end());
    for(int i=1; i<=node; i++){
        par[i] = i;
    }

    cout<<"Normal cost is:  "<<normalCost<<endl;
    cout<<"Minimum cost is: "<<Kruskal()<<endl;

    return 0;
}


/** node, edge: 14 16
1 7 2
1 2 9
2 9 5
2 11 6
3 8 2
3 6 2
4 9 7
4 10 7
5 9 7
5 10 11
6 8 10
7 8 2
11 13 12
11 14 1
13 15 3
14 15 3

total 89
min 56
*/

/**node, edge: 9 14
1 7 10
1 2 2
1 3 3
1 4 5
2 4 3
2 5 4
3 4 6
4 5 11
4 6 5
5 7 7
6 7 13
7 9 12
7 8 9
8 9 4
Normal Cost is 94
minimum cost is 37
*/
