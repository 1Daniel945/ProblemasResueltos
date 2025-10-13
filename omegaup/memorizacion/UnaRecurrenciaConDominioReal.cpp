#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
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
int MOD = 1e9 + 7;
map<ll, ull>mp;

ull f(double x){
    if(x <= 2) return 1;
    if(x > 2 && ceil(x) - floor(x) > 0){
        if(mp[x * 10] == 0){
            mp[x * 10] = f(floor(x)) + 2;
        }
        return mp[x * 10];
    }
    if(x > 2 && ceil(x) - floor(x) == 0 && (int) floor(x) % 2 == 0){
        if(mp[(x * 10) - 1] == 0){
            mp[(x * 10) - 1] = f(x - 1);
        }
        if(mp[(x * 10) - 2] == 0){
            mp[(x * 10) - 2] = f(x - 2);
        }
        return mp[(x * 10) - 1] + mp[(x * 10) - 2];
    }
    else if(x > 2 && ceil(x) - floor(x) == 0 && (int) floor(x) % 2 == 1){
        if(mp[(x * 10) - 1] == 0){
            mp[(x * 10) - 1] = f(x - 1);
        }
        if(mp[(x * 10) / 2] == 0){
            mp[(x * 10) / 2] = f(x / 2) + 1;
        }
        return mp[(x * 10) - 1] + mp[(x * 10) / 2];
    }
}

int main(){
    fast_io
    double x;
    cin in x;
    cout p f(x) p "\n";
    return 0;
} 