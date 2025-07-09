#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t1; cin in t1;
    while(t1--){
        int n1; cin in n1;
        if(n1 % 2 == 0) cout p "-1\n";
        else{
            vector<int>a;
            fr(i, 0, n1) a.push_back(i + 1);
            fr(i, 0, n1 - 1){
                if(i % 2 == 0) swap(a[i], a[i + 1]);
            }
            fi(i, n1, 0){
                i != 0 ? cout p a[i] p " " : cout p a[i] p "\n";
            }
        }
    }
    return 0;
}