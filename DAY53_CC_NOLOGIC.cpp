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

const int N = (int)2e5 + 10;
const int inf = (int)1e9+10;
const int M = (int)1e9 + 7;



void RadheRadhe(int t,bool kavya2719 = 1){
   string s;
   getline(cin,s);
   
   int hsh[26]={0};
   for(auto &ch : s){
     if(ch<'A' || ch>'z') continue;
     if(ch>'Z' && ch<'a') continue;
     if(ch<='Z') ch|=' ';
     hsh[ch-'a']++;
   }
   for(int i=0;i<26;++i){
     if(!hsh[i]){
       char ch = (i+'a');
       cout << ch << "\n";
       return;
     }
   }
   cout << "~\n";
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
    cin >> TTTT;
    cin.ignore();
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
