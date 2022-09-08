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
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;



void RadheRadhe(int t,bool kavya2719 = 1){
   int p,q,r;
   cin >> p >> q >> r;
   
   int a=0,b=0,c=0;
   int com = p&q&r;
   
   int ct = bipc(com);
   ll ans = (1ll<<(2*ct));
   
   /*int cnt=0;
   cnt = (p==0) + (q==0) + (r==0);
   if(cnt){
     if(cnt==2) ans++;
   }*/
   
   for(int i=20;i>=0;--i){
     if(p&(1<<i)){
       if(q&(1<<i));
       else if(r&(1<<i)) a += (1<<i);
       else ans=0;
     }
     
     if(q&(1<<i)){
       if(r&(1<<i));
       else if(p&(1<<i)) b += (1<<i);
       else ans=0;
     }
     
     if(r&(1<<i)){
       if(p&(1<<i));
       else if(q&(1<<i)) c += (1<<i);
       else ans=0;
     }
   }
   
   int P=a|b|com, Q=b|c|com , R=c|a|com;
   if(P!=p || Q!=q || R!=r) ans=0;
   
   cout << ans << "\n";
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
