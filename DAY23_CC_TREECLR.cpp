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

const int N = (int)1e6 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

bool col[N];
vector<int>g[N];
int sz,c,ct;
int anc_ch[N];
//set<int> st;

int dfs(int v,int anc,int grand){
  /*for(int i=1;i<=c;++i){
    if(chk[i]) continue;
    col[v]=i; break;
  }*/
  
  col[v]=1;
  int ans = ct;
  if(ct > 0) ct--;
  else return 0;
  
  if(grand) ct++;
  if(anc){
    ct += anc_ch[anc];
  }
  
  //int ct=st.size();
  /*cout << v << " -> ";
  for(auto &val : st) cout << val<< ' ';
  cout << "\n";*/
  /*if(st.size()){
    col[v] = *st.begin();
    st.erase(st.begin());
  }
  else return 0;
  
  if(grand) st.insert(col[grand]);
  
  if(anc){
    for(auto &ch : g[anc]){
      if(!col[ch]) continue;
      if(ch==v) continue;
      st.insert(col[ch]);
    }
  }*/
  
  ll ways=1;
  int j=1;
  for(auto &ch: g[v]){
    if(col[ch]) continue;
    
    //cout << ch << " -> " << ct << "\n";
    /*for(auto &val : st) cout << val<< ' ';
    cout << "\n";*/
    
    ways = (ways*dfs(ch,v,anc))%M;
    anc_ch[v]++;
    
    //chk[col[anc]]=1;
    /*auto it = st.find(col[anc]);
    if(it==st.end());
    else st.erase(it);*/
  }
  
  for(auto &ch: g[v]){
   if(ch!=anc){
     ct++;
     //st.insert(col[ch]);
   }
  }
 // cout << v << " " << (ct*1ll*ways)%M << "\n";
  
  if(grand){
    /*auto it = st.find(col[grand]);
    if(it==st.end());
    else st.erase(it);*/
    //chk[col[grand]]=1;
    ct--;
  }
  
  if(anc){
    ct -= anc_ch[anc];
  }
  
 /* cout << v << " -> ";
  for(auto &val : st) cout << val<< ' ';
  cout << "\n";*/
  //cout << v << " --> " << ct << "\n";
  return (ans*ways)%M;
}
// O(N)

void RadheRadhe(int t,bool kavya2719 = 1){
   cin >> sz >> c;
   
   for(int i=1;i<sz;++i){
     int x,y;
     cin >> x >> y;
     g[x].push_back(y);
     g[y].push_back(x);
   }
   
  // for(int i=1;i<=c;++i) st.insert(i);
   ct = c;
   cout << dfs(1,0,0);
   //for(int i=1;i<=sz;++i) cout << col[i] << ' ';
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
   // cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
