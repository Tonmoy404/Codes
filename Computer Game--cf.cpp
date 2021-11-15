#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string p, q; cin>>p>>q;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(p[i]=='1' && q[i]=='1'){
                flag = true;
            }
        }
        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
