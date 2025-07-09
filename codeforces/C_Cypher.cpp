#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define f first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n, n1; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        string s;
        fr(i, 0, n){
            cin in n1 in s;
            fr(j, 0, s.size()){
                //increase
                if(s.at(j) == 'D'){
                    a[i] += 1;
                    if(a[i] == 10){
                        a[i] = 0;
                    }
                }
                //decrease
                if(s.at(j) == 'U'){
                    if(a[i] == 0){
                        a[i] = 9;
                    }
                    else{
                        a[i] -= 1;
                        if(a[i] == 10) a[i] = 0;
                        else if(a[i] < 0) a[i] = 0;
                    }
                    //if(a[i] == 0) a[i] = 9;
                }
            }
        }
        fr(i, 0, n - 1) cout p a[i] p " ";
        cout p a[n - 1] p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
