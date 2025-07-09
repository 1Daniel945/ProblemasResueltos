#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
const int MAXN = 1e6 + 5;
const int inf = 1e9;
const int mod = 1e9 + 7;
 
long long dp[MAXN], coins[MAXN],n;
 
//dp iterativa
long long f(int x){
    dp[0] = 1;
    for(int i=1; i<=x; ++i){
        for(int j=0; j<6; ++j){
            if(i - coins[j] >= 0){
                dp[i] += dp[i-coins[j]];
                dp[i]%=mod;
            }
        }
    }
    return dp[x];
}
 
int main() {
    fastio()
    int x;
    cin>>x;
    for(int i=0; i<6; ++i)coins[i]=i+1;
    cout<<f(x)<<"\n";
}
