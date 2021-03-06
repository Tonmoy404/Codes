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

vector<iii>graph;
int par[10000+7];

int find_parent(int n){
    if(par[n]==n) return n;
    return find_parent(par[n]);
}

int KRUSKAL(){
    int minCost = 0;
    int sizee = graph.size();

    for(int i=0; i<sizee; i++){
        int u = graph[i].ss.ff;
        int v = graph[i].ss.ss;

        int u_parent = find_parent(u);
        int v_parent = find_parent(v);

        if(v_parent != u_parent){
            minCost+= graph[i].ff;
            par[v_parent] = par[u_parent];
        }
    }
    return minCost;
}

int main(){
    int node, edge, normalCost = 0;
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int u, v, w; cin>>u>>v>>w;
        normalCost+=w;
        graph.pb(iii(w,ii(u, v)));
    }
    sort(graph.begin(), graph.end());
    for(int i=1; i<=node; i++){
        par[i] = i;
    }

    cout<<"Normal Cost is "<<normalCost<<endl;
    cout<<"minimum cost is "<<KRUSKAL()<<endl;
    return Accepted;
}

/** node, edge: 14 16
1 7 2
1 2 9
2 9 5
2 11 6
3 8 2
3 6 2
4 9 7
4 10 7
5 9 7
5 10 11
6 8 10
7 8 2
11 13 12
11 14 1
13 15 3
14 15 3

total 89
min 56
*/

/**node, edge: 9 14
1 7 10
1 2 2
1 3 3
1 4 5
2 4 3
2 5 4
3 4 6
4 5 11
4 6 5
5 7 7
6 7 13
7 9 12
7 8 9
8 9 4
Normal Cost is 94
minimum cost is 37
*/
