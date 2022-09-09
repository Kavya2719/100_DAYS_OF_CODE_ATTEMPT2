#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define bipc(x) __builtin_popcountll(x)

#define yes cout << "YES\n"
#define no cout << "UNFIT\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;



void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   vector<int> v(sz);
   for(auto &val : v) cin >> val;
   
   int pf[sz+10]={0};
   for(int i=sz-1;i>=0;--i){
     pf[i]=max(pf[i+1],v[i]);
   }
   
   int mx=0;
   for(int i=0;i<sz;++i){
     mx = max(mx,pf[i]-v[i]);
   }
   
   if(mx==0) no;
   else cout << mx << "\n";
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
