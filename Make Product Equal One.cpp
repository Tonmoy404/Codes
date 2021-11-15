#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<ll>v;
    ll n, cnt1=0, cnt0=0, ans=0; cin>>n;
    bool flag = 0;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        v.push_back(x);
        if(x<0) cnt1++;
        if(x==0){
            ans++;
            flag = true;
        }
        else{
            ans+= abs(v[i])-1;
        }

    }
    if(cnt1%2!=0 && !flag) ans+=2;


    cout<<ans<<endl;

}
