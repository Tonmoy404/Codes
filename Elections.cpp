#include <bits/stdc++.h>
#define max3(a,b,c) max(a,max(b,c))
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;

    for(int i=0; i<n; i++){
        ll x, y, z;
        cin>>x>>y>>z;

        ll mx = max3(x,y,z);

        ll ans1 = mx-x;
        ll ans2 = mx-y;
        ll ans3 = mx-z;

        if(ans1 == ans2 && ans1 == ans3) {
            ans1++;
            ans2++;
            ans3++;
            cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
            continue;
        }

        if(x==mx) ans2++, ans3++;
        if(y==mx) ans1++, ans3++;
        if(z==mx) ans1++, ans2++;

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }

    return 0;
}
