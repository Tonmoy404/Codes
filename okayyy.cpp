#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        string s, p;
        cin>>n>>s>>p;

        bool flag = 1;

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<p.size(); j++){
                if(s[i]!=p[i]){
                        if(s[i]=='B' || s[i]=='G'){
                            if(p[i]=='B' || p[i]=='G'){
                                flag = 0;
                            }
                        }
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

    return 0;


}
