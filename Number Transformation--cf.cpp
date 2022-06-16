#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        if(a>b || b%a!=0){
            cout<<"0 "<<"0"<<endl;
        }
        else{
            int ans = b/a;

            cout<<"1 "<<ans<<endl;
        }
    }

    return 0;
}
