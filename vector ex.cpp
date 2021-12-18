#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    vector<int>v, m={10, 20};
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.pb(x);

    }



   auto it = min_element(v.begin(), v.end());

    cout<<*it<<endl;









    return 0;
}

/**

push_back
pop_back
size()
accumulate
begin()
end()
rbegin()
rend()
sort()
reverse()
insert()
clear();
empty
iterator
front()
back()
max_element
min_element

*/
