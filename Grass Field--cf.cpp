#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        map<int, int>mp;

        for(int i=0; i<4; i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        if(mp[1]==0){
            cout<<"0"<<endl;
        }
        else if(mp[1]==4){
            cout<<"2"<<endl;

        }
        else{
            cout<<"1"<<endl;
        }


    }

    return 0;
}
