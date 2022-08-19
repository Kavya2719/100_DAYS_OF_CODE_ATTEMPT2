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
   int sz,m;
   cin >> sz >> m;
   
   bool I=0,w=0;
   for(int i=0;i<sz;++i){
     string a,s;
     cin >> a >> s;
     
     if(a=="correct"){ 
       for(int i=0;i<m;++i) if(s[i]=='0') I=1; 
     }
     else{ 
       bool zero=0; 
       for(int i=0;i<m;++i) if(s[i]=='0') zero=1; 
       if(!zero) w=1;
     }
   }
   
   if(I) cout << "INVALID\n";
   else if(w) cout << "WEAK\n";
   else cout << "FINE\n";
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
