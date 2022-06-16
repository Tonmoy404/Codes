/**
    Here V stands for the number of nodes and
    E stands for number of edges

    Time Complexity: O(V + E log(V))

    Approach: By making a graph with given paths/edges, we can find the shortest path
    using Dijkstra Algorithm from node 1 to every node.
    Looking for some train paths which can be removed.
    we can remove train paths if there exists more paths(normal) by which we can reach any node
    with minimum weight, otherwise we can't..

*/



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
#define     iii             pair <int,ii>
#define     li              pair <ll,int>
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

const int inf = 1000000000 + 7;
const int sizee = 1e5 + 7;
vector <iii> graph[sizee];
ll dis[sizee];
int in[sizee],vis[sizee];

int call(int u) {
    priority_queue <li> q;
    dis[u] = 0;
    q.push(li(0,u));
    int cnt = 0;
    vis[u] = true;

     while(!q.empty()){
        int u = q.top().ss;
        q.pop();

        for(int i=0; i < graph[u].size(); i++) {
            int v = graph[u][i].ff;
            int w = graph[u][i].ss.ff;
            bool flag = graph[u][i].ss.ss;

            if(dis[u]+w < dis[v]) {
                dis[v] = dis[u] + w;
                if(!vis[v]) {
                    q.push(li(-w, v));
                    vis[v] = 1;
                }
            }
            else if(dis[u]+w == dis[v]) {
                    in[v]++;
            }
        }
        vis[u] = 0;
    }

    return cnt;
}


int main() {
    fast

    int node, edge, k;
    cin >>node>>edge>> k;

    for(int i=0; i<edge; i++) {
        int u, v;
        ll w;
        cin >>u >>v >> w;

        graph[u].pb(iii(v,ii(w,0)));
        graph[v].pb(iii(u,ii(w,0)));
    }

    vector <li> v;

    for(int i=0; i<k; i++) {
        int n;
        ll weight;
        cin >>n >>weight;

        v.pb(ii(weight,n));
        graph[1].pb(iii(n,ii(weight,1)));
    }

    for(int i=0; i<=node; i++){
            dis[i] = inf;
    }

    call(1);

    int result = 0;

    for(int i=0; i<k; i++) {
        int x = v[i].ss;

        if(dis[x] < v[i].ff)result++;
        else if(dis[x] == v[i].ff) {
            if(in[x])result++,in[x]--;
        }
    }

    cout <<result<<endl;

    return 0;
}
