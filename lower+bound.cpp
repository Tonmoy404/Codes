#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout<<"number of query: ";
    int t; cin>>t;
    while(t--){
        int x; cin>>x;

        int ans = lower_bound(v.begin(), v.end(), x)-v.begin();
        if(v[ans]==x) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
    return 0;
}
