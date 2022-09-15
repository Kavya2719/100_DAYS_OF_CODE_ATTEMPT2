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

const int N = 500;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


void RadheRadhe(int t,bool kavya2719 = 1){
   string s;
   ll n;
   cin >> s>> n;
   
  int sz=s.length();
  ll num=0;
  for(int i=0;i<sz;++i){
    num++;
    if(s[i]=='T') num++;
  }
  n*=12;
  ll ans=0;
  for(int x=1;x<n;++x){ 
    if(n < x*num) break;
    ans += n - x*num;
  }
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
