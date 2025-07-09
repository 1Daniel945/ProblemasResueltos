#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define f first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    string s, s1;
    cin in s in s1;
    if(s.at(s.size() - 1) != s1.at(s1.size() - 1)){
        cout p (int)s.size() + (int)s1.size() p "\n";
    }
    else{
        int x = 0;
        while(true){
            if(s1.empty() || s.empty()){
                break;
            }
            if(s.at(s.size() - 1) == s1.at(s1.size() - 1)){
                s.erase(s.size() - 1);
                s1.erase(s1.size() - 1);
                x++;
            }
            else break;
        }
        cout p (s.size() + s1.size()) p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
