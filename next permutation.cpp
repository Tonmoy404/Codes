#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x==0){
        return 1;
    }
    return x * fact(x-1);
}

int main(){

    string s;
    cin>>s;

    vector<string>v;

    int n = s.size();

//    for(int i=1; i<=n; i++){
//        m*=i;
//    }

    int m = fact(n);

    while(m>1){
        next_permutation(s.begin(), s.end());
        v.push_back(s);
        m--;
    }

    for(auto x: v){
        cout<<x<<endl;
    }

    cout<<s<<endl;

    return 0;
}
