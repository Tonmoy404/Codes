#include <bits/stdc++.h>
using namespace std;
int main(){

    queue< int > q;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        q.push(x);
    }

    while( !q.empty() ) {
        cout << q.front() << endl; // printing the front
        q.pop(); // removing that one
    }


    return 0;
}
