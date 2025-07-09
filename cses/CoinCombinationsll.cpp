#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
const int MAXN = 1e6 + 5;
const int inf = 1e9;
const int mod = 1e9 + 7;
 
int dp[MAXN], coins[105],n;
 
int f2(int x){
    dp[0] = 1;
    for(int i=0; i<n; ++i){
        for(int j=1; j<=x; ++j){
            if(j - coins[i] >= 0){
                dp[j] += dp[j-coins[i]];
                dp[j] %= mod;
            }
        }
    }
    return dp[x];
}
 
int main() {
    fastio()
    memset(dp,0,sizeof(dp));
    int x;
    cin>>n>>x;
    for(int i=0; i<n; ++i){
        cin>>coins[i];
    }
    int ans = f2(x);
    cout<<ans<<"\n";
    return 0;
}