#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    for(int i=0; i<3; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    for(auto x: v){
        cout<<x<<" ";
    }
    return 0;
}
