#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n; 
    cin in n;
    pair<char, int>pc;
    int peoples = 0;
    fr(i, 0, n){
        cin in pc.ff in pc.ss;
        if(pc.ff == 'B'){
            if(pc.ss > peoples){
                cout p "YES\n";
                peoples = 0;
            }
            else{
                cout p "NO\n";
                peoples -= pc.ss;
            }
        }
        else{
            peoples += pc.ss;
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}