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
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;


void RadheRadhe(int t,bool kavya2719 = 1){
   string s;
   cin >> s;
   
   int sz=s.length();
   
   //palindrome check
   int hi=sz-1,lo=0;
   while(hi-lo>1 && s[hi]==s[lo]){
     hi--; lo++;
   }
   if(s[hi]==s[lo]){ yes; return; }
   
   // char count check
   int hsh[26]={0};
   for(int i=0;i<sz;++i){
     hsh[s[i]-'a']++;
   }
   
   string v;
   for(int i=0;i<26;++i){
     if(!hsh[i]) continue;
     if(hsh[i]&1) v.push_back(i+'a');
   }
   
   if(sz&1){
     if(v.size()>1){ no; return; }
   }else{
     if(v.size()>2){ no; return; }
   }
   
   //arrangement check
   int copy_hi=hi,copy_lo=lo;
   bool f=0;
   
   if(s[hi]==s[lo+1]){
     lo++;
     while(hi-lo>1 && s[hi]==s[lo]){ hi--; lo++; }
     if(s[hi]==s[lo]) f=1;
   }
   
   hi=copy_hi,lo=copy_lo;
   if(s[hi-1]==s[lo]){
     hi--;
     while(hi-lo>1 && s[hi]==s[lo]){ hi--; lo++; }
     if(s[hi]==s[lo]) f=1;
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
