#include <bits/stdc++.h>
using namespace std;

vector<int>a, b;
int main(){
    cout<<"Enter size: "<<endl;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    b = a;

    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
