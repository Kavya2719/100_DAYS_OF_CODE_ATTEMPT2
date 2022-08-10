#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yo cout << "YO\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

int par[110],size[110];

void make(int v){
  par[v]=v;
  size[v]=1;
}

int find(int v){
  if(v==par[v]) return v;
  return par[v]=find(par[v]);
}

bool Union(int a,int b,bool chk=0){
  a = find(a);
  b = find(b);
  if(a==b) return 0;
  
  if(size[a] < size[b]) swap(a,b);
  if(chk) return 1;
  
  par[b]=a;
  size[a] += size[b];
  return 1;
}

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz,e;
   cin >> sz >> e;
   
   for(int i=0;i<sz;++i) make(i);
   
   for(int i=0;i<e;++i){
     int x,y;
     cin >> x >> y;
     Union(x,y);
   }
   
   int q;
   cin >> q;
   while(q--){
     int x,y;
     cin >> x >> y;
     if(!Union(x,y,1)) yo;
     else no;
   }
   
   for(int i=0;i<sz;++i){
     par[i]=0; size[i]=0;
   }
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
