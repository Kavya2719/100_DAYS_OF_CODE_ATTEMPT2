#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
#define lp(i,x,sz) for(int i=x;i<sz;i++)
#define ll long long

const int N = (int)1e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;

vector<pair<int,int>> v={{1,1},{-1,-1},{1,-1},{-1,1},{1,0},{0,1},{-1,0},{0,-1}};

bool isValid(int r,int c){
  return r>=1&&c>=1&&c<=8&&r<=8;
}

void RadheRadhe(int t,bool kavya2719 = 1){
   int r,c,k;
   cin >> r >> c >> k;
   
   vector<pair<int,int>> vec={{r,c}};
   bool vis[9][9]={0};
   vis[r][c]=1;
   
   for(int i=0,moves=0;moves<k;moves++){
     int tmp=vec.size();
     
     for(int j=i;j<tmp;++j){
       r=vec[j].ff , c=vec[j].ss;
       for(auto &val : v){
         int x=val.ff , y=val.ss;
         if(isValid(r+x,y+c) && (!vis[r+x][y+c])){
           vec.push_back({r+x,y+c}); vis[r+x][y+c]=1;
         }
       }
     }
     
     i=tmp;
   }
   
   cout << vec.size() << "\n";
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
