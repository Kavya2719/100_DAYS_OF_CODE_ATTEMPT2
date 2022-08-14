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

const int N = 360;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

int arr[N][N],sz;
vector<bool> prime((int)1e7+10,1);
map<int, int> m;
bool odd[N][N],eve[N][N],vis[N][N];

void dfs(int i,int j,bool f){ // f=1 -> odd , 0 -> eve
  if(i>=sz || j>=sz || j<0 || i<0) return;
  if(vis[i][j]) return;
  if(f && (!odd[i][j])) return;
  if((!f) && (!eve[i][j])) return;
  
  vis[i][j]=1;
  
  dfs(i+1,j,f);
  dfs(i-1,j,f);
  dfs(i,j+1,f);
  dfs(i,j-1,f);
}

void reset(){
  for(int i=0;i<sz;++i){
     for(int j=0;j<sz;++j){
       vis[i][j]=0; odd[i][j]=0; eve[i][j]=0;
     }
   }
}

void RadheRadhe(int t,bool kavya2719 = 1){
   cin >> sz;
   
   for(int i=0;i<sz;++i){
     for(int j=0;j<sz;++j){
       cin >> arr[i][j];
       
       if(prime[arr[i][j]]);
       else if(arr[i][j]&1) odd[i][j]=1;
       else eve[i][j]=1;
     }
   }
   
   ll ans=0;
   for(int i=0;i<sz;++i){
     for(int j=0;j<sz;++j){
       if(vis[i][j]) continue;
       if(odd[i][j]){
         ans += (arr[i][j]+3)/2;
         dfs(i,j,1);
       }else if(eve[i][j]){
         ans += (arr[i][j])/2;
         dfs(i,j,0);
       }else{
         ans += m[arr[i][j]];
       }
     }
   }
   
   cout << ans << "\n";
   reset();
}


void phle_ka_kaam(){
   prime[1]=prime[0]=0;
   for(int i=2;i<1e7;++i){
     if(prime[i])
     for(int j=i*2;j<1e7;j+=i){
       prime[j]=0;
     }
   }
   
   int ind=0;
   for(int i=2;i<1e7;++i){
     if(prime[i]){
       m[i]=ind; ind++;
     }
   }
   
  // for(int i=0;i<50;++i) if(prime[i]) cout << i << " ";
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
