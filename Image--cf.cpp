#include <bits/stdc++.h>
using namespace std;

void call(){
    set<char>st;

    for(int i=0; i<4; i++){
        char x;
        cin>>x;
        st.insert(x);
    }

    cout<<st.size()-1<<endl;

}

int main(){

    int t;
    cin>>t;

    while(t--){
        call();

    }

    return 0;
}
