#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    for(int i=0; i<7; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    auto it = unique(v.begin(), v.begin()+v.size());

    return 0;
}
