#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int cnt=0, mx=0, mini=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]=='?' || b[i]=='?') cnt++;
            if(a[i]>96 && b[i]>96){
                if(a[i] != b[i]) mx++;
                else if(a[i]==b[i]) mini++;
            }
        }

       cout<<a.size()-(cnt+mini)<<" "<<mx+cnt<<endl;
    }
    return 0;
}
