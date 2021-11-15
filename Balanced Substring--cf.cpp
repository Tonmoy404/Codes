#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int sizee; cin>>sizee;
        string s; cin>>s;
        int a =0, b=0;
        if(s.size()<=1) cout<<"-1"<<" "<<"-1"<<endl;
        else{
            for(int i=0; i<s.size()-1; i++){
            if(s[i]=='a' && s[i+1]=='b'  ||  s[i]=='b' && s[i+1]=='a'){
                a = i+1, b=i+2;
            }
        }
            if(a!=0)
            cout<<a<<" "<<b<<endl;
            else cout<<"-1"<<" "<<"-1"<<endl;
        }


    }

    return 0;
}
