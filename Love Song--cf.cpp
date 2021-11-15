#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q; cin>>n>>q;
    string s; cin>>s;
    vector<int>v;
    v.push_back((s[0]-'a' + 1));
    for(int i=1; i<n; i++){
        v.push_back((s[i]-'a'+1) + v[i-1]);
    }


    while(q--){
        int x, y; cin>>x>>y;
        x--, y--;
        if(x==0) cout<<v[y]<<endl;
        else{
            cout<<v[y]-v[x-1]<<endl;
        }
    }

    return 0;
}
