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

vector<pair<int,int>> moves={{-2,-1},{2,1},{2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
vector<pair<int,int>> king ={{1,0},{1,-1},{-1,1},{-1,-1},{1,1},{-1,0},{0,-1},{0,1}};

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz; cin >> sz;
   
   map<int,int> m;
   for(int i=0;i<sz;++i){
     int x,y;
     cin >> x >> y;
     for(auto &val : moves){
       int a=val.ff,b=val.ss;
       m[a+x,b+y]=1;
     }
   }
   
   int ki,kj;
   cin >> ki >> kj;
   
   bool f=1;
   for(auto &val : king){
     int a=val.ff,b=val.ss;
     f &= m[ki+a,kj+b];
   }
   f&=m[ki,kj];
   
   if(f) yes;
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
