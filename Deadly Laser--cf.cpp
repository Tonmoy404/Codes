#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n, m, x, y, z;
        cin>>n>>m>>x>>y>>z;

        if((n==2) || (m==2)){
            if(z!=0){
                cout<<"-1"<<endl;
                continue;
            }
        }

        if(n==3 || m==3){
            x+=z, y+=z;
            cout<<"hi"<<x<<" "<<y<<endl;
            if(x>=n || y>=m){
                cout<<"-1"<<endl;
                continue;
            }

        }

        x+=z, y+=z;

        if(x>=n && y>=m){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            cout<<(n-1) + (m-1)<<endl;
        }
    }

    return 0;
}
