#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=n; i>=1; i--){
        if(i%5==0){
            cout<<i<<endl;
            cout<<"Beep"<<endl;
        }
        else cout<<i<<endl;
    }
    return 0;
}
