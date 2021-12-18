#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t; cin>>s>>t;
    for(int i=0; i<min(s.size(), t.size()); i++){
        if(s[i]-'0' > t[i]-'0'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
