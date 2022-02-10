#include <bits/stdc++.h>
using namespace std;
set<char>st;
int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = s.size();
        for(int i=0; i<s.size(); i++){
            st.insert(s[i]);
        }

        int ans = st.size();

        cout<<res-ans<<endl;

    return 0;
}
