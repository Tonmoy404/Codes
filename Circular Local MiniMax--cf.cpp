#include <bits/stdc++.h>
#define     cyes    cout<<"YES"<<endl;
#define     cno     cout<<"NO"<<endl;
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<int>v, v2(n+2);

        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        for(int i=1, j=(n-1 ); i<n; i+=2, j--){
            v2[i] = v[j];
        }

        for(int i=0, j=0 ; i<n; i+=2, j++){
            v2[i] = v[j];
        }

        v2[v2.size()-2] = v2[0];
        v2[v2.size()-1] = v2[1];

//        for(auto x: v2){
//            cout<<x<<" ";
//        }

        bool flag = 0, xD = 0;

        for(int i=1; i<v2.size()-1; i++){
            if((v2[i-1] < v2[i] && v2[i] > v2[i+1])  ||  (v2[i-1] > v2[i] && v2[i] < v2[i+1])){
                flag = 1;
            }
            else{
                xD = 1;
                cno;
                break;
            }
        }

        if(xD==0){
            cyes;
            for(int i=0; i<v2.size()-2; i++){
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
