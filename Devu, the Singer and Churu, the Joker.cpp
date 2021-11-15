#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d, sum=0, time=0, ans=0;
    cin>>n>>d;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        time += x;
    }
    sum = (n-1)*10;
    sum+=time;
    if(sum<=d){
         ans = (n-1)*10;
         ans/= 5;
         ans += (d-sum)/5;
         cout<<ans<<endl;
    }
    else cout<<"-1"<<endl;


    return 0;
}
