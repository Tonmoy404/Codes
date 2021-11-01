#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s1, s2;
        cin>>s1>>s2;

        string ans=s1+s2;
        ans[0] = s1[0];

        int sizee  = min(s1.size(), s2.size());

        for(int i=1; i<sizee; i++){
            ans[i*2] = s1[i];

        }
        for(int i=0; i<sizee; i++){
            ans[i*2+1] = s2[i];

        }
        cout<<ans<<endl;
    }


    return 0;
}
