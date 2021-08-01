#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
};

Node *root = NULL;

void Insert(int value){
    if(root==NULL){
        root = new Node();
        root->val = value;
        root->next = NULL;
        return ;
    }
    Node *current = root;

    while(current->next!=NULL){
        current = current->next;
    }
    Node *newNode = new Node();
    newNode->val = value;
    newNode->next = NULL;
    current->next = newNode;
}

void Delete(int idx){
    if(idx==1){
        Node *temp = root;
        root = temp->next;
        delete temp;
        return ;
    }
    Node *current = root;
    int cnt = 1;
    while(cnt!=idx-1){
        current = current->next;
        cnt++;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
}

void Search(int value){
    Node *current = root;
    while(current->next!=NULL){
        if(current->val==value){
            cout<<"YES"<<endl;
            return ;
        }
        current = current->next;
    }
    if(current->val==value){
       cout<<"YES"<<endl;
       return ;
    }
    cout<<"NO"<<endl;
}

void Display(){
     Node *current = root;
    while(current->next != NULL){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;
}

int main()
{
    cout<<"Enter elements number: ";
    int x; cin>>x;
    cout<<"Enter elements: "<<endl;
    while(x--){
        int a; cin>>a;
        Insert(a);
    }
    cout<<"Displaying values: "<<endl;
    Display();


    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search"<<endl;
    int xD;
    while(1){
        cin>>xD;
        if(xD==1){
            cout<<"Enter value to insert: ";
            int  val; cin>>val;
            Insert(val);
            Display();
            cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search <--> enter 4 to exit"<<endl;
        }
        else if(xD==2){
            cout<<"Enter a index to  delete: ";
            int idx; cin>>idx;
            Delete(idx);
            Display();
            cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search <--> enter 4 to exit"<<endl;
        }
        else if(xD==3){
            cout<<"Enter a value to be searched: ";
            int value; cin>>value;
            Search(value);
            cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search <--> enter 4 to exit"<<endl;
        }
        else break;
    }
    return 0;
}
