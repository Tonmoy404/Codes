#include<iostream>
using namespace std;
int main(){

 struct student{

   char name[20];
   int id;

 };

 student sumon;

  struct student *stud;
  cout<<"Enter the size: "<<endl;
  stud= (student*)malloc(sizeof(struct student));
   cout<<"enter the elements: "<<endl;



   cin>>sumon.name;
   cout<<sumon.id<<endl;

        cout<<sumon.name<<" "<<sumon.id<<endl;


   return 0;
   }




