#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i < (int) n; ++i)
#define fi(i, x, n) for(int i = (int) x - 1; i >= n; --i)
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

struct roman {
    int i = 0;
    int v = 0;
    int x = 0;
    int l = 0;
    int c = 0;
};

void solve() {
    int n;
    vector<int>ai = {1, 2, 3, 1};
    while(cin in n, n != 0) {
        int i = 0, i1 = 0, v = 0, v1 = 0, x = 0, x1 = 0, x2 = 1, l = 0, c = 0;
        vector<roman>a(101);
        bool b = 0;
        fr(j, 1, 101) {
            //Calcular cada cuanto aparece i
            if(i < 4) {
                //a[j].i = ai[i];
                i1 += ai[i];
                i++;
            }
            else if(j % 5 == 0) {
                if(i > 0) i = 0;
            }
            a[j].i = i1;
            //Calcular cada cuanto aparece v
            if(j % 10 == 4) v1 = 5;
            if(v1 > 0) {
                v++;
                v1--;
            }
            a[j].v = v;
            //Calcular cada cuanto aparece x
            if(j % 10 == 9) {
              x2 = 10;
              x1++;
            }
            if(j == 50) b = 1;
            if(j == 59) x1 = 1, b = 0;
            if(j == 90) b = 0, x1 = 1, x2 = 10;
            if(x2 > 0 && !b) {
              if(x1 == 4) { //se usa solo 1 vez
                x += x1;
                x1 = 1;
                if(j == 39) {
                  x2 = 10;
                }
                else x2 = 1;
              }
              else {
                x += x1;
                x2--;
              }
            }
            a[j].x = x;
            //Calcular cada cuanto aparece l
            if(j >= 40 && j < 90) l++;
            a[j].l = l;
            //Calcular cada cuanto aparece c
            if(j >= 90) c++;
            a[j].c = c;
        }
        a[100].x = 150;
        cout p n p ": " p a[n].i p " i, " p a[n].v p " v, " p a[n].x p " x, " p a[n].l p " l, " p a[n].c p " c\n";
    }
}

int32_t main() {
    fast_io
    solve();
    return 0;
}