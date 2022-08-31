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
   
   vector<vector<int>> v(sz);
   for(int i=0;i<sz;++i){
     int m; cin >> m;
     for(int j=0;j<m;++j){
       int val; cin >> val;
       v[i].push_back(val);
     }
   }
   
   bool f=0;
   for(int i=0;i<sz;++i){
     for(int j=i+1;j<sz;++j){
       set<int> st;
       for(auto &val : v[i]) st.insert(val);
       for(auto &val : v[j]) st.insert(val);
       if(st.size()==5){
         f=1; break;
       }
     }
   }
   
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
