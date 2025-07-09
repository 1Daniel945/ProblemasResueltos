#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

int main(){ 
    int n; cin in n;
    vector<int>a(n);
    int mx = 0, mn = 0, pmx = 0, pmn = 0;
    fr(i, 0, n){
        cin in a[i];
        if(a[i] > mx){
            mx = a[i];
            pmx = i;
        }
    }
    int x = 0;
    fi(i, pmx, 1){
        swap(a[i], a[i - 1]);
        x++;
    }
    mn = mx;
    fr(i, 0, n){
        if(a[i] <= mn){
            mn = a[i];
            pmn = i;
        }
    }
    fr(i, pmn, n - 1){
        swap(a[i], a[i + 1]);
        x++;
    }
    cout p x p "\n";
    return 0;
} 