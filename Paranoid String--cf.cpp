#include <bits/stdc++.h>
using namespace std;

void xD(){
    int n;
    long long ans = 0;
    cin>>n;

    string s;
    cin>>s;

    ans = n;
    for(int i=1; i<s.size(); i++){
        if(s[i] != s[i-1]){
            ans+=i;
        }
    }

    cout<<ans<<endl;

}

int main(){

    int t;
    cin>>t;

    while(t--){
        xD();
    }

    return 0;
}
