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

const int N = (int)1e6 + 1;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

vector<bool> isPrime(N,1);
vector<int>prime;
int n;

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   vector<int> v(n);
   for(int i=0;i<sz;++i){
     int val;
     cin >> val;
     
     for(int j=0;j<n;++j){
       while(!(val % prime[j])){
         val/=prime[j];
         v[j]++;
       }
     }
   }
   
   ll ans=1;
   for(int i=0;i<n;++i){
     ans *= (v[i]+1);
   }
   
   cout << ans << "\n";
}


void phle_ka_kaam(){
   isPrime[0]=isPrime[1]=0;
   for(int i=2;i<N;++i){
     if(isPrime[i])
     for(int j=2*i;j<N;j+=i){
       isPrime[j]=0;
     }
   }
   
   for(int i=2;i<N;++i){
     if(isPrime[i]) prime.push_back(i);
   }
   n=prime.size();
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
