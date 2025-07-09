#include <bits/stdc++.h>
// Never say "I can't" without trying
typedef long long ll;
typedef unsigned long long ull;
#define rt0 return 0;
#define wh(x) while (x--)
#define fi(x, n) for (int i = x; i < n; ++i)
#define fj(x, n) for (int j = x; j < n; ++j)
#define fk(x) for (int k = 0; k < x; ++k)
#define fir(x, n) for (int r = x - 1; r >= n; --r)
#define in >>
#define p <<
#define vi(v) vector<int> v;
#define pa(x, a, b) pair<a, b> x;
#define vp(v, x, y) vector<pair<x, y>> v;
#define mpip(a, b) map<int, pair<a, b>> mp;
#define fpa(t, x, a, b) for (pair<a, b> t : x)
#define yesNo(x, y) x == y ? cout p "YES\n" : cout p "NO\n";
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define inp(x) freopen(to_string(x) + ".txt", "r", stdin);
#define out(x) freopen(to_string(x) + ".txt", "w", stdout);
#define F first
#define S second
using namespace std;

int main()
{
    int t;cin in t;
    string s = "";
    wh(t){
        int x, y, x1, y1;
        int a[4];
        fi(0,4) cin in a[i];
        x=a[0]+a[2];
        y=a[1]+a[3];
        mpip(int, int);
        fi(0, 4){
            cin in x1 in y1;
            mp[i]={x1,y1};
        }
        for(const auto &[i,v]:mp){
            if (i==0&&(v.F==x && v.S==y)){
                s+="A";
                break;
            }
            if (i==1&&(v.F==x && v.S==y)){
                s+="B";
                break;
            }
            if (i==2&&(v.F==x && v.S==y)){
                s+="C";
                break;
            }
            if (i==3 && (v.F==x && v.S==y)){
                s+="D";
                break;
            }
        }
    }
    cout p s p "\n";
    rt0;
}