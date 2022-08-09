#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


vector<int> g[N],ct[N];
int ctr[N];
int sz;

void dfs(int v, int par){
  for(auto &child : g[v]){
    if(child==par) continue;
    dfs(child,v);
    
    ctr[v] += ctr[child];
    ct[v].push_back(ctr[child]);
  }
  ctr[v]++;
}

void reset(){
  for(int i=1;i<=sz;i++){
    g[i].clear(); ct[i].clear(); ctr[i]=0;
  }
}

void RadheRadhe(int t,bool kavya2719 = 1){
   cin >> sz;
   
   for(int i=1;i<sz;++i){
     int x,y;
     cin >> x >> y;
     g[x].push_back(y);
     g[y].push_back(x);
   }
   
   dfs(1,0);
   ll sum = 0;
   
   for(int i=1;i<=sz;++i){
     vector<int> &v = ct[i];
     int l=v.size();
     
     for(int j=0;j<l;++j){
       sum += v[j]*i*2;
       for(int k=j+1;k<l;++k){
         sum += i*2*(v[j]*1ll*v[k]);
         sum %= M;
       }
     }
     
     sum += i; sum%=M;
    // cout << sum << " ";
   }
   
   cout << sum << "\n";
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
