#include <bits/stdc++.h>
using namespace std;

struct node{   //making a data type consists of int and pointer
    int val;
    node *next, *pre;
};

node *tail, *root = NULL;   //making two pointer
int sizee;
void push(int data)
{

    if(root==NULL){    //first value should be inserted at root
        root = new node();   //making a node name root
        root->val = data;    //assigning data to value part

        root->pre = NULL;  //roots pre is NULL
        root->next = NULL;  //roots next is NULL
        tail = root;   //only 1 node exists so that tail and root is same
        sizee = 1;  //size is 1 now coz of only 1 value
        return ;
    }

    node *newNode = new node();   //making a new node
    newNode->val = data;   //assigning value to data part
    newNode->next = NULL;  //next must NULL;
    newNode->pre = tail;   //new nodes pre will be tail
    tail->next = newNode;  //tails next will be new Node
    tail = newNode;  //and making the newnode as tail
    sizee++;  //counting nodes number
}

void forward_print(){
    node *current = root;  //making a reference variable of root
    while(current->next != NULL){  //printing value
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;  //printing las nodes value
}

void reverse_print(){
    node *current = tail;  //making reference of tail
    while(current->pre != NULL){
        cout<<current->val<<endl;
        current = current->pre;
    }
    cout<<current->val<<endl;  //printing first(last) value
}

void add_node(int pos, int data){
    if(pos==1){   //if position is root, then adding value to root
        node *update = new node();
        root->pre = update;  //previous roots pre will be new node
        update->pre  = NULL;  //new nodes pre must be NULL
        update->val = data;  //assigning value
        update->next = root;  //new nodes next will be previous node
        root = update;  //making new node as root
        return ;
    }
    if(pos==sizee){   //if position is last node(tail)
        node *newNode = new node();  //making new node
        node *temp = tail->pre;  //making reference of second last node
        newNode->val = data;  //assigning value
        temp->next = newNode;  //second last values next will be new node
        newNode->pre = temp;   //new nodes pre will be second node
        newNode->next = tail;  //
        tail->pre = newNode;   //last nodes pre will be new node
        return ;
    }
    int cnt = 1;  //taking a counter to visit anticipated node
    node *current = root;  //making roots reference
    while(cnt != pos-1){
        current = current->next;
        ++cnt;
    }
    node *update = new node();  //making new node
    update->val = data;   //assigning value
    update->pre = current;   //newnodes pre will be current
    current->next->pre = update;  //current next nodes pre will be new node
    update->next = current->next;  //updates next will be new node
    current->next = update;  //current next will be updated node
}

void delete_node(int data){
    node *current = root;
    while(current->next != NULL){
        if(current->val==data){
                if(current==root){
                    node *temp = root;
                    root = current->next;
                    current = current->next;
                    delete temp;
                    continue;
                }
            node *preTemp = current->pre;
            node *nextTemp = current->next;
            node *temp = current;
            preTemp->next = nextTemp;
            nextTemp->pre = preTemp;
            current = nextTemp;
            delete temp;
            continue;
        }
        current = current->next;
    }
        if(current->val==data){
            node *preTemp = current->pre;
            preTemp->next = NULL;
            delete current;
        }
}

int main()
{
    cout<<"Enter number of elements: ";
    int x; cin>>x;
    cout<<"Enter elements: "<<endl;
    while(x--){
        int a; cin>>a;
        push(a);
    }
    cout<<"Printing values: "<<endl;
    forward_print();
    cout<<endl<<"Printing values reversely: "<<endl;
    reverse_print();


    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to push"<<endl;
    int tap;
    while(scanf("%d", &tap)!=EOF){

        switch(tap){
            case 1: cout<<"Enter index and value: ";
                    int pos, val; cin>>pos>>val;
                    add_node(pos, val);
                    forward_print();
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to push"<<endl;
                    break;
            case 2: cout<<"Enter a value to be deleted: ";
                    int data; cin>>data;
                    delete_node(data);
                    forward_print();
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to push"<<endl;
                    break;
            case 3: cout<<"Enter a value to push: ";
                    int value; cin>>value;
                    push(value);
                    forward_print();
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to push"<<endl;
                    break;
        }
    }
    return 0;
}
