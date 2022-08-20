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

bool chk(char ch){

  return (ch < 'A' || ch>'z' || (ch>'Z' && ch<'a'));

}

string s,tar;

bool cmp(pair<int,int> a,pair<int, int> b){

  if(a.ff != b.ff) return a.ff>b.ff;

  if(a.ss == inf) return 0;

  char A = (tar[a.ss]<='Z')? tar[a.ss]|' ' : tar[a.ss];

  char B = (tar[b.ss]<='Z')? tar[b.ss]|' ' : tar[b.ss];

  return A>B;

}

void RadheRadhe(int t,bool kavya2719 = 1){

   cin >> s;

   cin.ignore();

   getline(cin,tar);

   

   string c;

   vector<pair<int,int>> hsh(26,{0,inf});

   int sz=tar.length();

   

   for(int i=0;i<sz;++i){

     char a = tar[i];

     if(chk(a)) continue;

     if(a <= 'Z') a|=' ';

     

     c.push_back(a);

     hsh[a-'a'].ff++;

     hsh[a-'a'].ss = min(hsh[a-'a'].ss,i);

   }

   

   reverse(all(s));

   sort(all(hsh),cmp);

   

   string ans=c;

   for(int i=0;i<26;++i){

     if(hsh[i].ss==inf) break;

     char a = tar[hsh[i].ss];

     if(a<='Z') a|=' ';

     

     for(int j=0;j<c.length();++j){

       if(c[j]==a) ans[j]=s[i];

     }

   }

   

   for(int i=0,j=0;i<sz;++i){

     if(chk(tar[i])) continue;

     bool cap=0;

     if(tar[i]<='Z') cap=1;

     

     tar[i]=ans[j];

     if(cap) tar[i]&='_';

     

     j++;

   }

   

   cout << tar << "\n";

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
