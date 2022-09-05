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

const int N = (int)1e6 + 1;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

/*vector<bool>prime(N,1);
vector<int> vec;
map<int,bool> m;*/

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   map<int,int> odd,eve;
   ll od=0, ev = 0;
   for(int i=0;i<sz;++i){
     int val;
     cin >> val;
     if(val&1){ odd[val]++; od++; }
     else{ eve[val]++; ev++; }
   }
   
   ll ans = (od*(od-1))/2 + (ev*(ev-1))/2;
  
   ll px=-1,py,ct=0;
   for(auto &val : odd){
    ll x=val.ff,y=val.ss;
     if(px == -1){
       ct += (y*(y-1))/2;
       px=x,py=y; continue;
     }
     
     int value = px^x;
     if(value==2) ct += py*y;
     ct += (y*(y-1))/2;
     
     px=x; py=y;
   }
   
   px=-1,py=-1;
   for(auto &val : eve){
    ll x=val.ff,y=val.ss;
     if(px == -1){
       ct += (y*(y-1))/2;
       px=x,py=y; continue;
     }
     
     int value = px^x;
     if(value==2) ct += py*y;
     ct += (y*(y-1))/2;
     
     px=x; py=y;
   }
   
   cout << ans-ct << "\n";
}


void phle_ka_kaam(){
   /*for(int i=2;i<N;++i){
     if(prime[i])
     for(int j=2*i;j<N;j+=i){
       prime[j]=false;
     }
   }
   
   for(int i=3;i<200;++i){
     if(prime[i]) vec.push_back(i);
   }
   
   int sz = vec.size();
   for(int i=0;i<sz;++i){
     for(int j=0;j<sz;++j){
       m[vec[i]+vec[j]]=1;
     }
   }
   m[4]=1;
   
   for(auto &[x,y] : m){
     if(x<180) cout << x << "\n";
   }*/
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
