#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
    string s = "123456789";
    int t, n; cin in t;
    while(t--){
        cin in n;
        if(n <= 9) cout p n p "\n";
        else{
            int sm = 0;
            string s2 = "";
            int c = s.size() - 1;
            while(true){
                if(c < 0) break;
                if(sm + s.at(c) - '0' <= n){
                    sm += s.at(c) - '0';
                    s2 += s.at(c);
                    c--;
                }
                else{
                    c--;
                }
                if(sm == n) break;
            }
            reverse(s2.begin(), s2.end());
            cout p s2 p "\n";
        }
    }
    return 0;   
}
