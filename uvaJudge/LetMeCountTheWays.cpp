#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fri(i,x,n,increment)for(int i=x; i<(int)n; i+=increment)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x,a,b) vector<pair<a,b>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

ll dp[30005], coins[5] = {1, 5, 10, 25, 50};

ll f2(int x) {
    dp[0] = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j <= x; ++j) {
            if (j - coins[i] >= 0) {
                dp[j] += dp[j - coins[i]];
            }
        }
    }
    return dp[x];
}

int main() {
    fastio()
    int x;
    while (cin>>x) {
        memset(dp, 0, sizeof(dp));
        ll ans = f2(x);
        ans>1?cout << "There are " << ans << " ways to produce " << x << " cents change.\n":
        cout << "There is only 1 way to produce " << x << " cents change.\n";
    }
    return 0;
}
