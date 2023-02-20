#include <bits/stdc++.h>
using namespace std;
int main(){

    string address = "1.1.1.1";

    string s="";

        for(int i=0; i<address.size(); i++){
            if(address[i+1]=='.'){
                s+=address[i];
                s+='[';
            }

            else if(address[i]=='.'){
                s+=address[i];
                s+=']';
            }
            else{
                s+=address[i];
            }
        }

        cout<<s<<endl;

    return 0;
}
