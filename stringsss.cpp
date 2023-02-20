#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;

    string t, z;

    for(int i=0; i<s.size()/2; i++){
        t+=s[i];
    }

    for(int i=s.size()/2; i<s.size(); i++ ){
        z+=s[i];
    }

    cout<<t<<endl;
    cout<<z<<endl;

    return 0;
}
