#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    map<int, int>mp;

    vector<int>v;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
    }

    for(int i=1; i<=10; i++){
        if(mp[i]==0) cout<<i;
    }


    return 0;
}
