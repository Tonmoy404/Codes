#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "Myself2 Me1 I4 and3";
    string t = "";
        int value = 0;

        vector<pair<int, string>>v;

        for(int i=0; i<s.size(); i++){

            if(s[i]==' ' || s[i]=='\0'){
                v.push_back({value, t});
                t = "";
                value = 0;
                continue;
            }

            else if(s[i]>=48 && s[i]<=57){
                value += s[i]-'0';
                value*=10;
                continue;
            }

            t+=s[i];
        }

        string m = "";
        for(int i = s.size()-1; i>=0; i--){
            if(s[i]==' '){
                break;
            }
            else if(s[i]>=48 && s[i]<=57){
                m += s[i];
            }
        }

        reverse(m.begin(), m.end());
        value = 0;

        for(int i=0; i<m.size(); i++){
            value += m[i] - '0';
            value *= 10;
        }

        v.push_back({value, t});

        sort(v.begin(), v.end());

        string res = "";

        for(int i=0; i<v.size()-1; i++){
            res += v[i].second;
            res+= " ";
        }

        res += v[v.size()-1].second;

        cout<<res<<endl;

    return 0;
}
