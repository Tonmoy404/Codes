#include <bits/stdc++.h>
using namespace std;
int main(){
    map< string, int  > m;
    string name;
    cout<<"Enter name to vote & enter finish to end: ";
    while( cin >> name ) {
        if(name=="finish") break;
        cout<<"new vote: ";
        m[name]++;
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
