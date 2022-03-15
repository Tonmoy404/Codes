#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(cnt==0) cin.ignore();

        string s;
        getline(cin,s);
        ++cnt;
    }

    cout<<"Ciencia da Computacao"<<endl;

    return 0;
}
