#include <bits/stdc++.h>
using namespace std;
int main(){
    int hi = 1;
    int t; cin>>t;
    while(t--){
        string s;

        if(hi==1)
            cin.ignore();
        getline(cin,s);
        hi--;

        int cnt = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                cnt++;
        }
        cout<<"Number of vowels = "<<cnt<<endl;

    }

    return 0;
}
