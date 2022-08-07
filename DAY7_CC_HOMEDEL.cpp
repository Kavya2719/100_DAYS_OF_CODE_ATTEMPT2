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
   int sz;
   cin >> sz;
   
   int dist[sz][sz];
   
   for(int i=0;i<sz;++i){
     for(int j=0;j<sz;++j){
       cin >> dist[i][j];
     }
   }
   
   for(int k=0;k<sz;++k){
     for(int i=0;i<sz;++i){
       for(int j=0;j<sz;++j){
         dist[i][j] = min(dist[i][j] , dist[i][k]+dist[k][j]);
       }
     }
   }
   
   int m;
   cin >> m;
   while(m--){
     int s,g,d;
     cin >> s >> g >> d;
     
     int ans = dist[s][g] + dist[g][d];
     cout << ans << " " << ans-dist[s][d] << "\n";
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
