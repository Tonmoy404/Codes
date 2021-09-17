#include <bits/stdc++.h>
using namespace std;

void tonmoy(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int sizee = s.size();
        if(sizee%2!=0 || s[0]==')' || s[sizee-1]=='('){
            cout<<"NO"<<endl;
        }
        else cout<<"yes"<<endl;
    }
}

int main(){
    tonmoy();
    return 0;
}
