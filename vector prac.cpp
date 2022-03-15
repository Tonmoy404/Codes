#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    vector<int>x={10,20};

    for(int i=0; i<5; i++){
        int x; cin>>x;
        v.push_back(x);
    }
//
//    v.erase(v.begin()+3, v.begin()+4);



    sort(v.rbegin(), v.rend());

//    for(int i=0; i<v.size(); i++){
//        cout<<v[i]<<" ";
//    }
//    cout<<endl;



    v.insert(v.begin()+1, 10);

     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    /**
    begin()
    end()
    front()
    back()
    sort()
    reverse()
    r.begin()
    r.end()
    empty()
    clear()
    erase()
    insert()
    size()
    push_back()
    pop_back()
    swap()

*/



    return 0;
}
