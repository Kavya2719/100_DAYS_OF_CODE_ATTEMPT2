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



void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   bool f=0;
   map<ll,bool> m;
   
   vector<ll> v(sz);
   for(auto &val : v){
     cin >> val;
     if(m[val]) f=1;
     m[val]=1;
   }
   
   ll r=v[0];
   for(int i=1;i<sz;++i){
     ll res = r|v[i];
     if(m[res] || (res==r)){ f=1; break; }
     m[res]=1; r=res;
   }
   
   r=v[sz-1];
   for(int i=sz-2;i>=1;--i){
     ll res = r|v[i];
     if(m[res] || (res==r)){ f=1; break; }
     m[res]=1; r=res;
   }
   
   if(f) no;
   else yes;
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
