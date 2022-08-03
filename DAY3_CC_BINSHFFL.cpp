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
   ll sz,tar;
   cin >> sz >> tar;
   
   int now = __builtin_popcountll(sz);
   int req = __builtin_popcountll(tar);
   
   if(tar<=1 && tar!=sz && sz){ cout<<"-1\n"; return; }
   
   int ct=0;
   if(tar) while(!(tar&(1ll<<ct))) ct++;
   
   req += ct-1;
   
   ll ans=0;
   if(sz==tar);
   else if(now == req) ans=1;
   else if(now > req) ans=2;
   else if(now < req){
     ans = req-now+1;
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
