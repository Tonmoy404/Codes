#include <bits/stdc++.h>
#define     ff      first
#define     ss      second
using namespace std;
int main(){

    string s, t = "";
    cin>>s;

    vector<char>v;

    int idx = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='='){
           idx = i;
           break;
        }
        t += s[i];
    }

    cout<<t<<" is a variable"<<endl;
    cout<<s[idx]<<" is an Operator"<<endl;

    map<char, int>mp;

    string numeric ="";

    for(int i=idx+1; i<s.size(); i++){
        mp[s[i]]++;

        if((s[i] > 96 && s[i] <123) && mp[s[i]]==1){
            cout<<s[i]<<" -> Variable"<<endl;
        }

        else if((s[i] >= 48 && s[i] <= 57 )){
            numeric += s[i];
        }
        else if(s[i]>=42 && s[i]<=47){
            if(mp[s[i]]==1){
                cout<<s[i]<<" -> Operator"<<endl;
            }
        }
        else{
            if(mp[s[i]]==1){
                v.push_back(s[i]);
            }
        }
    }

    cout<<endl<<"<<-----TOTAL_COUNT----->>"<<endl;

        for(auto x: mp){
            if(x.ff >= 48 && x.ff <= 57){
                continue;
            }
            else{
                cout<<"\t"<<x.ff<<" -> "<<x.ss<<endl;
            }

        }

        cout<<"Numeric Value"<<endl<<numeric<<endl<<endl;;

        cout<<"Special Characters: "<<endl;

        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;


    return 0;
}
