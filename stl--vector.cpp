#include <bits/stdc++.h>
using namespace std;

struct stdnt{
    string name;
    int roll;
    double marks;
};

int main(){
    stdnt a;
    cout<<"Enter name, roll, marks: "<<endl;

    cin>>a.name>>a.roll>>a.marks;

    cout<<fixed<<"Name is "<<a.name<<" Roll is "<<a.roll<<" Marks is "<<setprecision(3)<<a.marks<<endl;

    return 0;
}
