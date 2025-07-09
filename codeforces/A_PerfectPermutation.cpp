#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fast_io;
    int n; cin in n;
    if(n % 2 == 1) cout p "-1\n";
    else{
        vector<int>x;
        fr(i, 0, n) x.push_back(i + 1);
        fr(i, 0, n){
            if(i % 2 == 0) swap(x[i], x[i + 1]);
        }
        fr(i, 0, n){
            if(i < n - 1) cout p x[i] p " ";
            else cout p x[i] p "\n";
        }
    }
    return 0;
}