#include <bits/stdc++.h>
using namespace std;
int main(){

    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string newkey="";

        map<char, bool>okay;

        for(int i=0; i<key.size(); i++){
            if(key[i]==' '){
                continue;
            }
            else{
                if(!okay[key[i]]){
                    newkey  += key[i];
                }

                okay[key[i]] = 1;
            }
        }
//
//        for(auto x: okay){
//            cout<<x.first<<" "<<x.second<<endl;
//        }


        map<char, char>mp;
        string ans="";

        int j = 0;


        for(char i='a'; i<='z'; i++){
            mp[newkey[j]] = i;
            cout<<newkey[j]<<" "<<mp[newkey[j]]<<endl;
            j++;
        }

        for(int i=0; i<message.size(); i++){
            if(message[i]==' '){
                ans+=' ';
            }
            else{
                 ans+=mp[message[i]];
            }
         }

         cout<<ans<<endl;

    return 0;
}
