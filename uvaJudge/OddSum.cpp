#include <bits/stdc++.h>
#define fi(x,n)for(int i=x; i<=n; ++i)
#define fj(x,n)for(int j=x; j<n; ++j)
#define fk(x,n)for(int k=x; k<n; ++k)
#define fr(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main() {
    int t;cin in t;
    int a,b;
    fj(0,t){
        int s=0;
        cin in a in b;
        fi(a,b){
            if(i%2==1){
                s+=i;
            }
        }   
        cout p "Case " p j+1 p": " p s p"\n"; 
    }
    return 0;
}
