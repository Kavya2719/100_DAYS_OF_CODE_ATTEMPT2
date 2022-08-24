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
   string s,prev;
   
   while(cin>>s){
     
     string a,b;
     for(int i=0;i<20;++i){
       if(i&1) b.push_back(s[i]);
       else a.push_back(s[i]);
     }
     
     int sc_a=0,sc_b=0,ct=10;
     for(int i=0;i<5;++i){
       if(a[i]=='1') sc_a++;
       if(sc_a-sc_b > 5-i){ ct=(i+1)*2-1; break; }
       if(sc_b-sc_a > 4-i){ ct=(i+1)*2-1; break; }
       
       if(b[i]=='1') sc_b++;
       if(abs(sc_a-sc_b) > 4-i){ ct=(i+1)*2; break; }
     }
     
     bool f=1;
     if(sc_a > sc_b) cout << "TEAM-A " << ct << "\n";
     else if(sc_a < sc_b) cout << "TEAM-B " << ct << "\n";
     else f=0;
     
     if(f) continue;
     
     for(int i=5;i<10;++i){
       if(a[i]=='1') sc_a++;
       if(b[i]=='1') sc_b++;
       if(sc_a!=sc_b){ ct=(i+1)*2; break; }
     }
     
     if(sc_a==sc_b) cout << "TIE\n";
     else{
       if(sc_a > sc_b) cout << "TEAM-A " << ct << "\n";
       else cout << "TEAM-B " << ct << "\n";
     }
   }
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
   // cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
