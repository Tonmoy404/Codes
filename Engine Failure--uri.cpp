#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size()-1; i++){
        if(v[i]>v[i+1]){
            cout<<i+2<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }


    return 0;
}
