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
   int sz; string s;
   cin >> sz >> s;
   
   string zero(sz,'0');
   if(s==sz){ cout << sz-sz/2 << "\n"; return; }
   
   int ct=0;
   if(s[0]=='0' && s[1]=='0') ct++;
   if(sz>2 && s[sz-1]=='0' && s[sz-2]=='0') ct++;
   
   for(int i=2;i<sz-2;++i){
     if(s[i-1]=='0' && s[i]=='0' && s[i+1]=='0'){ ct++; i++; }
   }
   
   cout << ct << "\n";
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
