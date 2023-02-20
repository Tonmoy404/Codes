#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;

    cout<<"number of inputs: ";
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int j = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i]!=0){
            swap(v[i], v[j]);
            j++;
        }
    }

    for(auto x: v){
        cout<<x<<" ";
    }


    return 0;
}
