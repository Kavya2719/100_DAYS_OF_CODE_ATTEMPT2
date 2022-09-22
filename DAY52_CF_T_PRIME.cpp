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

const int N = (int)1e6 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

vector<bool> isPrime(N,1);

void RadheRadhe(int t,bool kavya2719 = 1){
   ll sz;
   cin >> sz;
   
   ll lo=2,hi=1e6,mid;
   while(hi-lo>1){
     mid = (hi+lo)/2;
     if(mid*mid > sz) hi = mid-1;
     else lo = mid;
   }
   hi = (hi*hi == sz)?hi:lo;
   if(hi*hi == sz && isPrime[hi]) yes;
   else no;
}


void phle_ka_kaam(){
   isPrime[0]=isPrime[1]=0;
   for(int i=2;i<N;++i){
     if(isPrime[i])
     for(int j=2*i;j<N;j+=i){
       isPrime[j] = 0;
     }
   }
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT;
    cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
