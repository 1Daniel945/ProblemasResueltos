#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio();
    int t,n,k;cin in t;
    while (t--){
        cin in n in k;
        int a[n];
        bool mk[n];
        fr(i,0,n)cin in a[i];
        while (true){
            //Encontrar donde esta el maximo elemento
            int mx=0,ps=-1;
            fr(i,0,n){
                if(a[i]>mx){
                    mx=a[i];
                    ps=i;
                }
            }
            if(k>0){
                if(ps==n-1){
                    if(a[ps]>a[ps-1]){
                        a[ps]=a[ps-1];
                        k--;
                    }
                    else{
                        a[ps-1]=a[ps];
                        k--;
                    }
                }
                else{
                    if(a[ps]>a[ps+1]){
                        a[ps]=a[ps+1];
                        k--;
                    }
                    else{
                        a[ps+1]=a[ps];
                        k--;
                    }
                }
            }
            else break;
        }
        fr(i,0,n)cout p a[i] p "\n";
    }
    return 0;
}