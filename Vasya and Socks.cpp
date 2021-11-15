#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y; cin>>x>>y;
    if(y<x) cout<<x<<endl;
    else if(x==y){
        cout<<x+1<<endl;
    }
    else{
        int ans = x/y;
        if(ans%y==0) cout<<x+ans+1<<endl;
        else cout<<x+ans<<endl;
    }

    return 0;
}
