#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=1e6+5;
const int inf = 1e9;
 
int dp[MAXN], coins[105];
 
int f(int x){
    if(x==0)return 0;
    if(x<0)return inf;
    if(dp[x]!=-1)return dp[x];
    //Crear la variable ans para pasarle valores por referencia es como un acceso directo
    int &ans = dp[x] = inf;
    for(int coin : coins){
        ans = min(ans,f(x-coin)+1);
    }
    return ans;
}
 
int main() {
    //inicializar el arreglo con -1
    memset(dp,-1,sizeof(dp));
    int n,x;
    cin>>n>>x;
    for(int i=0; i<n; ++i){
        cin>>coins[i];
    }
    if(f(x)>=inf)cout<<"-1\n";
    else cout<<f(x)<<"\n";
    return 0;
}