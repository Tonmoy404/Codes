#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>x;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        int a; cin>>a;
        x.push_back(a);
    }

    int sum = 0;

    sort(x.begin(), x.end());

    for(int i=0; i<n; i++){
        sum+= x.back() - x[i];
    }

    cout<<sum<<endl;

    return 0;
}
