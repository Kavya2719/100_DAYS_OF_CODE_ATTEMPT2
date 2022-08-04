#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
#define lp(i,x,sz) for(int i=x;i<sz;i++)
#define ll long long

const int N = (int)1e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

int sz;
vector<vector<int>> v(110);

long double bfs(int source){
  queue<int> q;
  int dist[sz+10];
  for(int i=0;i<sz+10;++i) dist[i]=inf;
  
  q.push(source);
  dist[source]=0;
  
  while(!q.empty()){
    int cur=q.front();
    q.pop();
    
    for(auto &child : v[cur]){
      if(dist[child]!=inf) continue;
      dist[child] = dist[cur]+1;
      q.push(child);
    }
  }
  
  double avg=0;
  for(int i=1;i<=sz;++i) if(dist[i]!=inf) avg+=dist[i];
  return avg/sz;
}

void RadheRadhe(int t,bool kavya2719 = 1){  
   scanf("%d",&sz);
   
   for(int i=1;i<=sz;++i){
     char ch=' '; int x;
     while(ch!='\n'){
       scanf("%d%c",&x,&ch);
       v[i].push_back(x);
     }
   }
   
   pair<long double,int> ans = {inf,0};
   for(int i=1;i<=sz;++i){
     long double res = bfs(i);
     if(ans.ff > res){
       ans = {res,i};
     }
   }
   
   cout << ans.ss << " " << fixed << setprecision(6) << ans.ff << "\n";
   
   for(int i=1;i<=sz;++i) v[i].clear();
}


void phle_ka_kaam(){
   
}


int main()
{
   // iofast();
    phle_ka_kaam();
    
    int TTTT=1;
    cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
