#include <bits/stdc++.h>
#define     fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     ll              long long
#define     ull             unsigned long long
#define     db              double
#define     ull             unsigned long long
#define     MIN             INT_MIN
#define     MAX             INT_MAX
#define     all(x)          (x).begin(), (x).end()
#define     ii              pair <int,int>
#define     il              pair<int, ll>
#define     iii             pair <int,ii>
#define     pll             pair <ll,ll>
#define     plll            pair <ll,pll>
#define     ff              first
#define     ss              second
#define     cyes            cout<<"YES"<<endl;
#define     cno             cout<<"NO"<<endl;
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


const ll inf = 1e9;
vector<il>graph[100000+7];
ll dis[1000000], parent[1000000];


void dijkstra(int u){
    dis[u] = 0;
    parent[u] = -1;
    queue<int>q;
    q.push(u);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i].ff;
            ll w = graph[u][i].ss;

            if(dis[u]+w < dis[v]){
                dis[v] = dis[u]+ w;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

int main(){
    for(int i=0; i<1000000; i++){
        dis[i] = inf;
    }

    int node, edge, q;
    cin>>node>>edge>>q;

    for(int i=0; i<edge; i++){
        int u, v;
        ll w;
        cin>>u>>v>>w;
        graph[u].pb(il(v,w));
        graph[v].pb(il(u,w));
    }
    dijkstra(1);
//    cout<<"Enter Destination node: ";
//    int dest; cin>>dest;
//    cout<<dis[dest]<<endl;

    int cnt = 0;

    while(q--){
        int t;
        ll w;
        cin>>t>>w;

        if(dis[t]<=w){
            cnt++;
        }
    }

    cout<<cnt<<endl;

}

/*

5 5 3
1 2 1
2 3 2
1 3 3
3 4 4
1 5 5

*/
