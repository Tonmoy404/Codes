#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>v;

        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }


        if(v.front()!=1){
            int ans=0;
            for(int i=1; i<v.size(); i++){
                if(v[i]==1) ans=i;
            }
            reverse(v.begin(), v.begin()+ans+1);
        }

        else{
            int cnt=1, ans=0;
            for(int i=0; i<v.size(); i++){
                if(v[i]!=cnt){
                    ans = i;
                    break;
                }
                ++cnt;
            }

            int ans2=0;
//            cout<<cnt<<endl;
            for(int i=ans+1; i<v.size(); i++){
                if(v[i]==cnt) ans2=i;
            }

//            cout<<ans2<<endl;
            reverse(v.begin()+cnt-1, v.begin()+ans2+1);
        }

        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}
