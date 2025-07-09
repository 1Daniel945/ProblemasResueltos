#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t; cin in t;
    string s;
    fr(j, 0, t){
        string x;
        fr(i, 0 ,52){
            cin in s;
            if(i == 32){
                x = s;
            }
        }
        cout p "Case " p j + 1 p ": " p x p "\n";
    }
    return 0;   
}