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

const int N = (int)1e6 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

ll ans[N],fact[N];

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   cout << ans[sz] << "\n";
}


void phle_ka_kaam(){
   fact[0]=fact[1]=1;
   for(int i=2;i<N;++i){
     fact[i]=(fact[i-1]*i)%M;
   }
   
   for(int i=1;i<N;++i){
     ans[i]=ans[i-1]+(fact[i]*i)%M;
     ans[i]%=M;
   }
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
