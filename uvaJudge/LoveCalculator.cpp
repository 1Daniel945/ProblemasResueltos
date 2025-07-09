#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

//Love calculator

int main() {
  string s,s1;
  map<char,int>mp;
  mp.insert({{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8},{'i',9},{'j',10},
  {'k',11},{'l',12},{'m',13},{'n',14},{'o',15},{'p',16},{'q',17},{'r',18},{'s',19},{'t',20},
  {'u',21},{'v',22},{'w',23},{'x',24},{'y',25},{'z',26}});
  while(getline(cin,s),getline(cin,s1)){
    int sum1=0,sum2=0;
    fr(i,0,s.size()){
      sum1+=mp[tolower(s.at(i))];
    }
    fr(i,0,s1.size()){
      sum2+=mp[tolower(s1.at(i))];
    }
    while(sum1>9){
      int temp=0;
      while (sum1>0){
        temp+=sum1%10;
        sum1/=10;
      }
      sum1 = temp;
    }
    while(sum2>9){
      int temp=0;
      while (sum2>0){
        temp+=sum2%10;
        sum2/=10;
      }
      sum2 = temp;
    }
    printf("%.2lf",(double) min(sum1, sum2) / max(sum1, sum2) * 100);
    cout p " %\n";
  }
  return 0;
}
