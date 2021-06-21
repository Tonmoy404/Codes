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
#define     minQ            priority_queue <int,vector<int>,greater<int> >
#define     maxQ            priority_queue<int,vector<int>,less<int> >
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
    node *next;
};

node *root = NULL;

void push(int data){
    if(root==NULL){
        root = new node();
        root->val = data;
        root->next = NULL;
        return ;
    }
    node *current = root;

    while(current->next!=NULL){
        current = current->next;
    }
    node *newNode = new node();
    newNode->val = data;
    newNode->next = NULL;
    current->next = newNode;
}

void print(){
     node *current = root;
    while(current->next != NULL){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;
}

void add_node(int pos, int data){
    if(pos==1){
        node *update = new node();
        update->val = data;
        update->next = root;
        root = update;
        return ;
    }
    node *current = root;
    int cnt = 1;
    while(cnt != pos-1){
        current = current->next;
        cnt++;
    }
    node *update = new node();
    update->val = data;
    update->next = current->next;
    current->next = update;
}

void delete_node(int idx){
    if(idx==1){
        node *temp = root;
        root = temp->next;
        delete temp;
        return ;
    }
    node *current = root;
    int cnt = 1;
    while(cnt!=idx-1){
        current = current->next;
        cnt++;
    }
    node *temp = current->next;
    current->next = temp->next;
    delete temp;
}

void search_value(int data){
    node *current = root;
    while(current->next!=NULL){
        if(current->val==data){
            cout<<"YES"<<endl;
            return ;
        }
        current = current->next;
    }
    if(current->val==data){
       cout<<"YES"<<endl;
       return ;
    }
    cout<<"NO"<<endl;
}

int main()
{
    cout<<"Enter elements number: ";
    int x; cin>>x;
    cout<<"Enter elements: "<<endl;
    while(x--){
        int a; cin>>a;
        push(a);
    }
    cout<<"Printing values: "<<endl;
    print();


    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search"<<endl;
    int tap;
    while(scanf("%d", &tap)!=EOF){

        switch(tap){
            case 1: cout<<"Enter index and value: ";
                    int pos, val; cin>>pos>>val;
                    add_node(pos, val);
                    print();
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search"<<endl;
                    break;
            case 2: cout<<"Enter a index to be deleted: ";
                    int idx; cin>>idx;
                    delete_node(idx);
                    print();
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search"<<endl;
                    break;
            case 3: cout<<"Enter a value to be searched: ";
                    int data; cin>>data;
                    search_value(data);
                    cout<<endl<<"enter 1 to insert <--> enter 2 to delete <--> enter 3 to search"<<endl;
                    break;

        }
    }
    return Accepted;
}
