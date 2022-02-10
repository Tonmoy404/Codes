#include <bits/stdc++.h>
using namespace std;

bool call(int sum, int n){
    if(sum%n==0) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            sum+=x;
        }

        if(call(sum, n)) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }

    return 0;
}
