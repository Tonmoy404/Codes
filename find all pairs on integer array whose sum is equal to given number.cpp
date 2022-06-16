#include <bits/stdc++.h>
using namespace std;
int main(){

//    int n; cin>>n;
//
//    vector<int>v;
//
//    for(int i=0; i<n; i++){
//        int x; cin>>x;
//        v.push_back(x);
//    }
//
//    int sum; cin>>sum;
//
//    for(int i=0; i<n; i++){
//        for(int j=i+1; j<n; j++){
//            if(v[i]+v[j]==sum){
//                cout<<v[i]<<" "<<v[j]<<endl;
//            }
//        }
//    }

    int n; cin>>n;

    vector<int>v;
    map<int, int>mp;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
        mp[x]++;
    }

    int sum; cin>>sum;

    for(int i=0; i<n; i++){
        int ans = sum-v[i];
        mp[v[i]]--;
        if(mp[ans]) cout<<v[i]<<" "<<ans<<endl;
        mp[v[i]]++;
    }

    return 0;
}

