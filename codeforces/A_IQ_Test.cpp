#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
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
    fastio();
    char mt[4][4];
    fr(i,0,4){
        fr(j,0,4){
            cin >> mt[i][j];
        }
    }
    bool x=0;
    fr(i,0,4){
        fr(j,0,4){
            int pp=0,g=0;
            if(i+1<4 && j+1<4){
                mt[i][j]=='#'?g++:pp++;
                mt[i][j+1]=='#'?g++:pp++;
                mt[i+1][j]=='#'?g++:pp++;
                mt[i+1][j+1]=='#'?g++:pp++;
            }
            if(((g==3&&pp==1)||(g==1&&pp==3))||(g==4||pp==4)){
                x=1;
                break;
            }
        }
    }
    x?cout p "YES\n": cout p "NO\n";
    return 0;
}