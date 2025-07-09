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
#define vp(v, x, y) vector<pair<x, y>> v;
#define psi(t, x) for (pair<string, int> t : x)
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
    fastio();
    int t, n;
    string s;
    cin in t;
    wh(t)
    {
        cin in n in s;
        int px = -1, py = -1;
        fi(0, s.size())
        {
            if (s.at(i) == 'B')
            {
                px = i;
                break;
            }
        }
        fir(s.size(), 0)
        {
            if (s.at(r) == 'B')
            {
                py = r;
                break;
            }
        }
        cout p(py - px) + 1 p "\n";
    }
    rt0;
}