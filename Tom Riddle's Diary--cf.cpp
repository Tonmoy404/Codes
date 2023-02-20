#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    map<string, bool>mp;

    while(n--){
        string s;
        cin>>s;

        if(mp[s]){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        mp[s] = 1;
    }


    return 0;
}
