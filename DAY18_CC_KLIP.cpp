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
   
   string s;
   cin >> s;
   
   int hsh[sz]={0};
   int a=0;
   for(int i=0;i<sz-k+1;++i){
     if(hsh[i]==-1) a^=1;
     if((s[i]-'0')^a){
       a^=1; hsh[i]++; if(i+k<sz) hsh[i+k]--;
     }
   }
   string ans(sz,'0');
   
   for(int i=1;i<sz;++i) hsh[i]+=hsh[i-1];
   
   for(int i=sz-k+1;i<sz;++i){
     if(hsh[i]&1) ans[i]=(s[i]=='0')?'1':'0';
     else ans[i]=s[i];
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
