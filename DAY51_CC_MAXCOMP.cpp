#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define bipc(x) __builtin_popcountll(x)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
using ll = long long;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


int g[50][50];
ll dp[50];

ll rec(int a){
  if(!a) return 0;
  if(dp[a]!=-1) return dp[a];
  
  ll mx = rec(a-1);
  mx += g[a][a-1];
  for(int i=0;i<a;++i){
    mx = max(g[i][a]+rec(i),mx);
  }
  return dp[a] = mx;
}

void reset(){
  for(int i=0;i<49;++i){
    for(int j=0;j<49;++j){
      g[i][j]=0;
    }
  }
}

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   for(int i=0;i<sz;++i){
     int x,y,cost;
     cin >> x >> y >> cost;
     g[x][y] = max(g[x][y],cost);
     g[y][x] = g[x][y];
   }
   memset(dp,-1,sizeof(dp));
   cout << rec(48) << "\n";
   reset();
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
    cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
