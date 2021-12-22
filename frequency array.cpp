#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    map<char, int>mp;

    cout<<"Enter numbers of input: ";
    int n;
    cin>>n;

    cout<<"Enter values: "<<endl;

    while(n--){
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
    }
    cout<<"showing digits count: "<<endl;
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}
