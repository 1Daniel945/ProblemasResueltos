#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int t; cin in t;
    while (t--){
        char mt[8][8];
        int x=-1,y=-1;
        fr(i,0,8){
            fr(j,0,8){
                cin in mt[i][j];
            }
        }
        fr(i,0,8){
            fr(j,0,8){
                if(mt[i][j]=='#'){
                    if(mt[i-1][j-1]=='#'&&mt[i-1][j+1]=='#'
                    &&(mt[i+1][j-1]=='#'&&mt[i+1][j+1]=='#')){
                        x=i,y=j;
                    }
                }
            }
        }
        cout p x+1 p " " p y+1 p "\n";
    }
    return 0;
}