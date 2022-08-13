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
   int sz,k;
   cin >> sz >> k;
   
   int sc_m=0, sc_t=0;
   vector<int> motu,tomu;
   for(int i=0;i<sz;++i){
     int val;
     cin >> val;
     if(i&1){ sc_t += val; tomu.push_back(val); }
     else{ sc_m += val; motu.push_back(val); }
   }
   sort(all(motu));
   sort(all(tomu));
   
   int sz1=motu.size(),sz2=tomu.size();
   
   int ct=0;
   while(sc_t <= sc_m && (k--)){
     if(ct == sz1 || ct == sz2) break;
     int diff = motu[sz1-ct-1] - tomu[ct];
     sc_t += diff;
     sc_m -= diff;
     ct++;
   }
   
   if(sc_t > sc_m) yes;
   else no;
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
