#include <bits/stdc++.h>
#define     ll              long long
#define     ull             unsigned long long
#define     db              double
#define     ull             unsigned long long
#define     MIN             INT_MIN
#define     MAX             INT_MAX
#define     all(x)          (x).begin(), (x).end()
#define     ii              pair <int,int>
#define     iii             pair <int,ii>
#define     pll             pair <ll,ll>
#define     plll            pair <ll,pll>
#define     ff              first
#define     ss              second
#define     minQueue        priority_queue <int,vector<int>,greater<int> >
#define     maxQueue        priority_queue<int,vector<int>,less<int> >
#define     pb              push_back
#define     max3(a,b,c)     max(a, max(b,c))
#define     min3(a,b,c)     min(a, min(b,c))
#define     GCD(x,y)        __gcd((x), (y))
#define     LCM(x,y)        ((x / GCD((x), (y))) * y)
#define     mem(x,y)        memset((x), (y), sizeof (x));
#define     Case            int T; scanf("%d", &T); for(int cas = 1; cas <= T; ++cas)
#define     pf              printf
#define     sf              scanf
#define     Accepted        0
#define     log(x)          cout<<x<<endl
#define     logg(x,y)       cout<<x<<" "<<y<<endl
#define     powerOfTwo(x)   (x && !(x & (x - 1)))
#define     Iterator(type)  type <int> :: iterator
#define     mapIterator     map <int,int> :: iterator //it->ff it->ss
using namespace std;

/*----------------------Graph Moves----------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1}; int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
/*------------------------------------------------*/


/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

const int MAXN =1.5e7 + 10; // MAXN=1.5 * 10^7 +10
const double eps = (double)1e-8; // eps = 10^-8
const double PI = acos(-1.0);
inline bool eq(double a,double b){ return abs(b - a) < eps; }

inline double getdouble(){
    double x;
    scanf("%lf",&x);
    return x;
}
#define DB getdouble()

inline int getint(){
    int x;
    scanf("%d", &x);
    return x;
}
#define II getint()

inline long long getlonglong(){
    long long x;
    scanf("%lld", &x);
    return x;
}
#define LL getlonglong()

inline unsigned long long getunsignedlonglong(){
    unsigned long long x;
    scanf("%llu", &x);
    return x;
}
#define ULL getunsignedlonglong()

//*-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-* *-*  *-*  *-*  *-*  *-* *-*  *-*  *-*  *-*  *-*

struct node{
    int val;
    node *next, *pre;
};

node *tail, *root = NULL;
int sizee;
void push(int data)
{
    if(root==NULL){
        root = new node();
        root->val = data;

        root->pre = NULL;
        root->next = NULL;
        tail = root;
        sizee = 1;
        return ;
    }
    node *newNode = new node();
    newNode->val = data;
    newNode->next = NULL;
    newNode->pre = tail;
    tail->next = newNode;
    tail = newNode;
    sizee++;
}

void forward_print(){
    node *current = root;
    while(current->next != NULL){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;
}

void reverse_print(){
    node *current = tail;
    while(current->pre != NULL){
        cout<<current->val<<endl;
        current = current->pre;
    }
    cout<<current->val<<endl;
}

void add_node(int pos, int data){
    if(pos==1){
        node *update = new node();
        root->pre = update;
        update->pre  = NULL;
        update->val = data;
        update->next = root;
        root = update;
        return ;
    }
    if(pos==sizee){
        node *newNode = new node();
        node *temp = tail->pre;
        temp->next = newNode;
        newNode->val = data;
        newNode->pre = temp;
        newNode->next = tail;
        tail->pre = newNode;

    }
    int cnt = 1;
    node *current = root;
    while(cnt != pos-1){
        current = current->next;
        ++cnt;
    }
    node *update = new node();
    update->val = data;
    update->pre = current;
    current->next->pre = update;
    update->next = current->next;
    current->next = update;
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
    return Accepted;
}
