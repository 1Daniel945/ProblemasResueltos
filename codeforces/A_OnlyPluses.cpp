#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

//min_element cuando ocupe encontrar el minimo y sumarle 

int main(){
    fastio
    int t; cin in t;
    while (t--){
        vector<int>a(3);
        fr(i, 0, 3){
            cin in a[i];
        }
        fr(i, 0, 5){
            int x = *min_element(a.begin(), a.end());
            int index = distance (a.begin(), find(a.begin(), a.end(), x));
            a[index] += 1;
        }
        int m = 1;
        fr(i, 0, 3){
            m *= a[i];
        }
        cout p m p "\n";
    }
    
    return 0;
}

/*
    fastio
    int t; cin in t;
    while(t--){
        int mxe = 0;
        vector<int>e(3);
        fr(i, 0, 3){
            cin in e[i];
            mxe = max(e[i], mxe);
        }
        int x = 5;
        fr(i, 0, 3){
            if(e[i] != mxe){
                while(x > 0 && e[i] <= mxe){
                    e[i] += 1;
                    x--;
                }
            }
        }
        int ml = 1;
        fr(i, 0, 3) ml *= e[i];
        cout p ml p "\n";
    }
*/