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
    int t1, n1; cin in t1;
    while(t1--){
        cin in n1;
        map<int, int>m;
        fr(i, 1, n1 + 1){
            m[i] = 0;
        }
        int a[n1];
        fr(i, 0, n1){
            cin in a[i];
        }
        m[a[0]] = 1;
        fr(i, 1, n1){
            if(m[a[i] - 1] == 1 || m[a[i] + 1] == 1){
                m[a[i]] = 1;
            }
            else break;
        }
        int c = 0;
        fp(int, int, e, m){
            if(e.first > 0 && e.second > 0) c++;
        }
        c == n1 ? cout p "YES\n" : cout p "NO\n";
    }
    return 0;
}
