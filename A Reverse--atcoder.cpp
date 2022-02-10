#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int x, y;
    cin>>x>>y>>s;

    --x;
    reverse(s.begin()+x, s.begin()+y);
    cout<<s<<endl;


    return 0;
}
