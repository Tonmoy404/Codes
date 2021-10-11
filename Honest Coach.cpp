#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    vector<int>first, second;
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            first.push_back(x);
        }

        sort(first.begin(), first.end());
        int mini = 0;
        for(int i=1; i<n; i++){
            mini = first[i] - first[i-1];
            second.push_back(mini);
        }

        sort(second.begin(), second.end());

        cout<<second.front()<<endl;
        first.clear();
        second.clear();

    }

    return 0;
}
