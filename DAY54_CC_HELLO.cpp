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
   double d; int u,sz;
   cin >> d >> u >> sz;
   
   double cost = d*u; int ind=0;
   for(int i=0;i<sz;++i){
     int m,c; double r;
     cin >> m >> r >> c;
     double cst = (r*u)+(double)c/m;
     if(cst < cost){
       ind = i+1; cost = cst;
     }
   }
   
   /*vector<pair<int,pair<double,int>>> v(sz);
   int gcd=0; ll all=1;
   for(auto &val : v){
     cin >> val.ff >> val.ss.ff >> val.ss.ss;
     gcd = __gcd(gcd,val.ff);
     all *= val.ff;
   }
   int lcm = all/gcd;
   
   double mn = d*u*lcm;
   cout << mn << " ";
   int ind=0,i=1;
   for(auto &val : v){
     double cst = lcm*u*val.ss.ff + (lcm/val.ff)*val.ss.ss;
     if(mn > cst){
       mn = cst; ind=i;
     }
     i++;
   }*/
   
   cout << ind << "\n";
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
