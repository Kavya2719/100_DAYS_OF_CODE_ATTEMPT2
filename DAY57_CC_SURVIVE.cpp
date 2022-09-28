#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define bipc(x) __builtin_popcountll(x)

#define yes cout << "YES\n"
#define no cout << "-1\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
using ll = long long;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


/*
int dp[10001][1001];

int rec(int now,int day){
  if(now<0) return inf;
  if(day == s+1) return 0;
  
  if(dp[][])
  
  now -= k;
  int mn = rec(now,day+1);
  if(day%7) mn = min(mn,1+rec(now+sz,day+1));
  
  return mn;
}
*/

void RadheRadhe(int t,bool kavya2719 = 1){
   int sz,k,s;
   cin >> sz >> k >> s;
   
   /*int now=0,ct=0;
   bool f=1;
   for(int day=1;day<=s;day++){
     now -= k;
     if(day%7){
       if(now < 0){ now += sz; ct++; }
       if((day - ct - day/7 > 0) && day%7 == 6 && now < k){ now += sz; ct++; }
     }
     if(now<0){ f=0; break; }
     
     if(f) cout << ct << "\n";
     else no;
   }*/
   
   int day = s - (s/7);
   int r = day*sz - s*k;
   if(r<0){ no; return; }
   day -= r/sz;
   cout << day << "\n";
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
