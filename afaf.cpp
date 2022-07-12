#include <bits/stdc++.h>
#define     ii      pair<int, int>
using namespace std;
int main(){
    vector<ii>v;

    for(int i=0; i<5; i++){
        int x, y;
        cin>>x>>y;
        v.push_back(ii(x,y));
    }

    int q;
    cin>>q;

    for(int i=0; i<v.size(); i++){
        if(v[i].second==q){
            cout<<v[i].first<<endl;
        }
    }

    return 0;
}
