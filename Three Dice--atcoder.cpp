#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    v.push_back(0);
    int j = 6;
    for(int i=1; i<=6; i++){
        v.push_back(j);
        --j;
    }

    int a, b, c;
    cin>>a>>b>>c;

    int x = v[a];
    int y = v[b];
    int z = v[c];

    int sum = x+y+z;

    cout<<sum<<endl;

    return 0;
}
