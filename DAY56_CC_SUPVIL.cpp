#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define bipc(x) __builtin_popcountll(x)

#define yes cout << "superheroes\n"
#define no cout << "villains\n"
#define draw cout << "draw\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
using ll = long long;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


bool chk(string &s){
  int sz = s.length();
  string tmp;
  for(int i=sz-1; i>=0 && i>=sz-3 ; --i){
    tmp.push_back(s[i]);
  }
  if(tmp=="nam") return 1;
  for(int i=sz-4; i>=0 && i>=sz-5 ; --i){
    tmp.push_back(s[i]);
  }
  reverse(all(tmp));
  if(tmp=="woman") return 1;
  return 0;
}

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz;
   cin >> sz;
   
   int f=-1,super=0,vil=0;
   while(sz--){
     string s;
     cin >> s;
     
     if(chk(s)) super++;
     else vil++;
     
     if(f!=-1);
     else if(super - vil == 2) f=1;
     else if(vil - super == 3) f=0;
   }
   
   if(f==-1) draw;
   else if(f) yes;
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
