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
#define ip(arr) cout p arr[i] p " \n"[i == arr.size() - 1];
typedef long long ll;
using namespace std;

void solve(){
    int n, v; cin in n;
    vector<int>b(3, 0);
    int x = 0;
    fr(i, 0, n){
        cin in v;
        if(v == 4) x++;
        if(v == 1) b[0]++;
        if(v == 2) b[1]++;
        if(v == 3) b[2]++;
    }
    //one y three
    if(b[0] >= b[2]){
        x += b[2];
        b[0] -= b[2];
        b[2] = 0;
    }
    else{
        x += b[0];
        b[2] -= b[0];
        b[0] = 0;
    }
    //two
    if(b[1] % 2 == 0) x += b[1] / 2, b[1] = 0;
    else{
        x += floor(b[1] / 2);
        b[1] = b[1] - (floor(b[1] / 2) * 2);
    }
    //one and two
    if(b[0] > 0 && b[1] > 0){
        if(b[0] % 2 == 0){
            x += b[1];
            b[0] -= (b[1] * 2);
            b[1] = 0;
        }
        else{
            if(b[0] >= b[1]){
                x += b[1];
                b[0] -= b[1];
                b[1] = 0;
            }
            else{
                x += b[0];
                b[1] -= b[0];
                b[0] = 0;
            }
        }
    }
    if(b[0] > 0 && b[0] >= 4) x += (b[0] / 4), b[0] -= (b[0] / 4) * 4;
    if(b[0] > 0) x++;
    if(b[1] > 0) x += b[1];
    if(b[2] > 0) x += b[2];
    cout p x p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}