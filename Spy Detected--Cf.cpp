#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        map<int, int>mp;
        vector<int>v;

        int n; cin>>n;

        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
            mp[x]++;
        }

        for(int i=0; i<v.size(); i++){
            if(mp[v[i]]==1) cout<<i+1<<endl;
        }
    }

    return 0;
}
