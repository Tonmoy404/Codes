#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n, x, sum=2, cnt=0; cin>>n>>x;
        while(sum<n){
            sum+=x;
            cnt++;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
