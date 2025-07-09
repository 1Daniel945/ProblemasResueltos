#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fri(i,x,n,increment)for(int i=x; i<(int)n; i+=increment)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x,a,b) vector<pair<a,b>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    char mt[3][10];
    char c;
    pair<int,int>ps;
    fr(i,0,3){
        fr(j,0,10){
            cin in mt[i][j];
            if(mt[i][j]=='=')ps={i,j};
        }
    }
    bool b=0;
    fr(i,ps.second+1,10){
        if(mt[ps.first][i]!='.'){
            c=mt[ps.first][i];
            b=1;
            break;
        }
    }
    if(b==0)cout p "You shall pass!!!\n";
    else cout p c p "\n";
    return 0;
}