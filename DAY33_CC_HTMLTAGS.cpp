#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yes cout << "Success\n"
#define no cout << "Error\n"
#define ccase(t) "Case #" << t << ": "
//#define lp(i,x,sz) for(int i=x;i<sz;i++)
typedef long long ll;

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;



void RadheRadhe(int t,bool kavya2719 = 1){
   string s;
   cin >> s;
   
   bool f=0;
   if(s.back()=='>'){ s.pop_back(); f=1; }
   
   int ind=0;
   if(s.front()=='<') ind++;
   else f=0;
   if(ind && s[ind]=='/') ind++;
   else f=0;
   
   int sz = s.size();
   int ct=0;
   for(int i=ind;i<sz;++i){
     if(s[i]>='a' && s[i]<='z');
     else if(s[i]>='0' && s[i]<='9');
     else f=0;
     ct++;
   }
   
   if(ct && f) yes;
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
