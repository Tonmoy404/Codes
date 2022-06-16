#include <bits/stdc++.h>
using namespace std;
int main(){
    int first, second, third;
    first=second=third= -INT_MIN;

    vector<int>v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]>first){
            third = second;
            second = first;
            first = v[i];
        }

        else if(v[i]>second){
            third = second;
            second = v[i];
        }

        else if(v[i]>third){
            third = v[i];
        }
    }

    cout<<first<<" "<<second<<" "<<third<<endl;


    return 0;
}
