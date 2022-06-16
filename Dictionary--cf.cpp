#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int ans1 = s[0] - 'a';
        int ans2 = s[1] - 'a';

        if(ans1>ans2){
            ans2++;
            cout<<(ans1*25)+ans2<<endl;
        }
        else{
            cout<<(ans1*25)+ans2<<endl;
        }
    }

    return 0;
}
