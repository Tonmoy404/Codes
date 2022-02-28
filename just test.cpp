#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0; i<5; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    int x = 2;

    cout<<v[x]+10;
    return 0;
}
