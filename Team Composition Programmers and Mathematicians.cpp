#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;

    while(t--){
        ll x, y;
        cin>>x>>y;

        if(x==0 || y==0 || x+y<4) cout<<"0"<<endl;
        else if(x==1 || y==1) cout<<"1"<<endl;
        else{
            ll ans1 = (x+y)/4;
            ll ans2 = min(x,y);

            cout<<min(ans1, ans2)<<endl;
        }
    }

    return 0;

}
