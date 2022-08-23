#include <bits/stdc++.h>
using namespace std;

void tonmoy(string s){
    int value = 0;

    for(int i=0; i<s.size(); i++){
        value+= s[i]-'0';
        if(i<s.size()-1){
            value*=10;
        }

    }

    cout<<value<<endl;
    cout<<value+10<<endl;

}

int main(){

    string s;
    cin>>s;

//    int ans = tonmoy(s);
    tonmoy(s);

    return 0;
}
