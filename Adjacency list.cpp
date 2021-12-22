#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>graph[10];

    cout<<"Enter number of edges and nodes: ";

    int node, edge;
    cin>>node>>edge;
    cout<<"Enter connected nodes: "<<endl;

    for(int i=0; i<edge; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    ;
    for(int i=0; i<1000; i++){
        cout<<"Adjacent list of nodes "<<i<<" are ";
            for(auto x: graph[i]){
                cout<<" = "<<x;
            }
        cout<<endl;
    }

    return 0;
}
