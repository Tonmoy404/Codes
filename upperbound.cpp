#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    auto it = upper_bound(v.begin(), v.end(), 5);

    return 0;
}
