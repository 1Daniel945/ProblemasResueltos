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
    int t, n; cin in t;
    string s, s1;
    while(t--){
        cin in n in s;
        char last = '$';
        s1 = "";
        fr(i, 0, s.size()){
            if(last == '$'){
                last = s.at(i);
                s1.push_back(last);
            }   
            else if(s.at(i) == last){
                last = '$';
            }
        }
        cout p s1 p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}