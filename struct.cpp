#include <bits/stdc++.h>
using namespace std;

struct man{
    string name;
    int ID;
    double salary;
};

int main(){

    man ok[2];

    for(int i=0; i<2; i++){
        cout<<"Enter name: ";
        cin>>ok[i].name;
        cout<<"Enter ID: ";
        cin>>ok[i].ID;
        cout<<"Enter salary: ";
        cin>>ok[i].salary;
    }

    for(int i=0; i<2; i++){
        cout<<ok[i].name<<" "<<ok[i].ID<<" "<<ok[i].salary<<endl;
    }


    return 0;
}
