#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio();
    int n;cin in n;
    if(n==0)cout p "\n";
    else{
        int x=0;
        bool a=0;
        while(n--){
            if(a==0){
                x++;
                cout p x p " ";
                if(x==5)a=1;
            }
            else if(a==1){
                x--;
                cout p x p " ";
                if(x==1)a=0;
            } 
        }
    }
    return 0;
}