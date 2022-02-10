#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set<int>st;

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }

    cout<<"Total  number of divisor: "<<st.size()<<endl;
    cout<<"Divisors are showing below: "<<endl;
    int sum=0;
    for(auto x: st){
        sum+=x;
        cout<<x<<" ";
    }

    cout<<endl<<"sum of divisors is: "<<sum<<endl;

}
