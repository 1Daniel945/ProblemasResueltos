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
    int t; cin in t;
    ll n;
    while (t--){
        cin in n;
        int x = 0;
        string s = to_string(n);
        string s1 = s;
        reverse(s1.begin(), s1.end());
        while(true){
            //make sum
            ll sm = stoll(s) + stoll(s1);
            n = sm;
            s = to_string(n);
            s1 = s;
            reverse(s1.begin(), s1.end());
            x++;
            if(s == s1){
                break;
            }
        }
        cout p x p " " p s p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
