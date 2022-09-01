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



void RadheRadhe(int t,bool kavya2719 = 1){
   ll sz,q;
   cin >> sz >> q;
   ll num = (sz*2+1);
   while(q--){
     ll v; cin >> v;
     if(v>sz*3 || v<sz+1) cout << "0\n";
     else cout << sz-abs(num-v) << "\n";
   }
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
    //cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
