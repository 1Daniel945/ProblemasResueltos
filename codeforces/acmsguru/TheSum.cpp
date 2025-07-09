#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    int n; cin in n;
    int ant = 1, des = 1, tm = 0;
    ll sm = 0;
    fr(i, 0, n){
        if(i == 0) ant = 1, sm++;
        else if(i == 1) des = 1, sm++;
        else{
            tm = des;
            des += ant;
            sm += des;
            ant = tm;
        }
    }
    cout p sm p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}