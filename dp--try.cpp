#include <bits/stdc++.h>
using namespace std;

int mark[1000];

int main(){
    mark[0] = 1;

    int n;
    cin>>n;

    vector <int> v;

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int m;
    cin>>m;

    for(int i=1; i<=m; i++) {
        for(int j=0; j < v.size(); j++) {
            if(i-v[j] >= 0) mark[i] += mark[i-v[j]];
        }
    }

    for(int i=0; i<=m; i++){
        cout<<i<<"-> "<<mark[i]<<endl;
    }

    return 0;
}
