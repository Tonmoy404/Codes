#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>
int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int ans = INT_MAX;
    ii xD;
    for(int i=0; i<n-1; i++){
                if(abs(v[i] - v[i+1])<ans){
                    ans = abs(v[i] - v[i+1]);
                    xD = ii(i,i+1);
                }
            }
        if(abs(v[n-1]-v[0])<ans){
            cout<<n<<" "<<"1"<<endl;
            return 0;
        }
    cout<<xD.first + 1<<" "<<xD.second + 1<<endl;
    return 0;
}
