#include <bits/stdc++.h>
using namespace std;

void call(){
    int a, b, c;
    cin>>a>>b>>c;

    if(b<c){
        int ans = (c-b) + c-1;
        a--;

        if(a<ans){
            cout<<"1"<<endl;
        }
        else if(a==ans){
            cout<<"3"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    else{
        a--;
        int ans = (b-c) + c-1;

        if(ans<a){
            cout<<"2"<<endl;
        }
        else if(a<ans){
            cout<<"1"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        call();
    }

    return 0;
}
