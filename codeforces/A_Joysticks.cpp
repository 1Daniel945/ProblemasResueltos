#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

map<pair<int, int>, int>dp;

int game(int a, int b){
    if(a <= 0 || b <= 0) return 0;
    if(a == 1 && b == 1) return 0;
    if(dp[{a - 2, b + 1}] == 0) dp[{a - 2, b + 1}] = game(a - 2, b + 1);
    if(dp[{a + 1, b - 2}] == 0) dp[{a + 1, b - 2}] = game(a + 1, b - 2);
    return max(dp[{a - 2, b + 1}], dp[{a + 1, b - 2}]) + 1;
}

int main(){
    fast_io
    int a, b;
    cin in a in b;
    cout p game(a, b) p "\n";
    return 0;
}

//En la fuerza bruta siempre se usa recursion 