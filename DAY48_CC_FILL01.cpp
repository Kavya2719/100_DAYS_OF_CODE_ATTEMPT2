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



void RadheRadhe(int t,bool kavya2719 = 1){
   int sz,k;
   cin >> sz >> k;
   
   string s;
   cin >> s;
   
   int zero=0,ans=0;
   for(int i=0;i<sz;++i){
     if(s[i]=='0') zero++;
     else{
       ans += zero/k;
       zero=0;
     }
   }
   ans += zero/k;
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
