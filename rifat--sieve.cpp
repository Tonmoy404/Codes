#include <bits/stdc++.h>
using namespace std;

vector<int>v;

bool mark[100007];
void seive (int n){
    mark[0] = mark[1] = 1;

    for(int i=4; i<n; i+=2) mark[i]=1;

    for(int i=3; i<=sqrt(n); i+=2){
        if(!mark[i]){
            for(int j=i*i; j<=n; j+=i){
                mark[j]=1;
            }
        }

    }

    for(int i=0; i<n; i++){
        if(!mark[i]){
            v.push_back(i);
        }
    }
}
int main(){
    cout<<"Enter a Element: ";
    int n; cin>>n;
    seive(n);
    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<endl;
    }
    return 0;
}
