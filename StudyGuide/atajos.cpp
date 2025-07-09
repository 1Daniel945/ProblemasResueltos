#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main() {
    int memo[10];
    //inicializar tabla memorizacion dp
    memset(memo,-1,sizeof memo);
    int ans,a,b,c;
    //Simplificacion del if(a)ans=b; else ans=c;
    ans = a ? b : c;     
    return 0;
}

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int n, target;
double dist[20][20], memo[1<<16];
double matching(int bitmask){
    if(memo[bitmask]>-0.5){
        return memo[bitmask];
    }
    if(bitmask==target)return memo[bitmask]=0;
}


