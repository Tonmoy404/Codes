#include <bits/stdc++.h>
using namespace std;

map<string, bool>mp;

void call(){

    cout<<"Enter your mail: ";

    string s, t = "";
    cin>>s;

    string ya = "yahoo.com";
    string gm = "gmail.com";
    string hot = "hotmail.com";

    if(mp[s]){
        cout<<"This mail already EXISTS..!"<<endl<<endl;;
        return ;
    }

    int idx = 0, cnt = 0;

    if(s[0]>=33 && s[0]<=47){
        cout<<"Invalid Mail"<<endl<<endl;
        return ;
    }

    for(int i=0; i<s.size(); i++){
        if(s[i]=='@'){
            idx = i;
            break;
        }

        if(s[i]>=97 && s[i]<=122){
            cnt++;
        }

        if(s[i]>=48 && s[i]<=57){
            cnt++;
        }
        if(s[i]=='.' && s[i+1] != '.'){
            cnt++;
        }

        t += s[i];
    }

    if(t.size() != cnt){
        cout<<"Invalid Address"<<endl<<endl;
        return ;
    }
    else{
        string last = "";
        for(int i=idx+1; i<s.size(); i++){
            last += s[i];
        }

        if(last==gm || last==ya || last==hot){
            cout<<"<<--VALID-->>"<<endl<<endl;
            mp[s] = true;
            return;
        }
        else{
            cout<<"Invalid Mail"<<endl<<endl;
            return ;
        }
    }
}

int main(){

    cout<<"Enter number of test cases: ";

    int t;
    cin>>t;

    while(t--){
        call();
    }

    return 0;
}
