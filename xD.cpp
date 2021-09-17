#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    vector<int>v;
    vector<int>sum;
    vector<int>result;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.pb(x);
    }
    sum.pb(v[0]);
    for(int i=1; i<n; i++){
        sum.pb(sum[i-1] + v[i]);
    }
    for(int i=0; i<sum.size(); i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}
