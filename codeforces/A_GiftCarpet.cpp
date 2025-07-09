#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=(int)n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int t,n,m;cin in t;
    while(t--){
        cin in n in m;
        char mt[n][m];
        fr(i,0,n){
            fr(j,0,m){
                cin in mt[i][j];
            }
        }
        string s="";
        char x='v';
        fr(i,0,m){
            fr(j,0,n){
                if(mt[j][i]==x&&s.empty())s+=x;
                else if(mt[j][i]==x && x!=s.at(s.size()-1))s+=x;                
            }
            if(!s.empty()){
                if(s.at(s.size()-1)=='v')x='i';
                else if(s.at(s.size()-1)=='i')x='k';
                else if(s.at(s.size()-1)=='k')x='a';
            }
        }
        if(s=="vika")cout p "YES\n";
        else cout p "NO\n";
    }
    return 0;
}
