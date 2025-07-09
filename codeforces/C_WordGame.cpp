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
    while(t--){
        cin in n;
        vector<int>a(3, 0);
        vector<vector<string>>vs(3);
        string s;
        map<string, int>mp;
        fr(i, 0, 3){
            fr(j, 0, n){
                cin in s;
                vs[i].push_back(s);
                mp[s]++;
            }
        }
        fr(i, 0, 3){
            fr(j, 0, n){
                if(mp[vs[i][j]] == 1){
                    a[i] += 3;
                }
                else if(mp[vs[i][j]] == 2){
                    a[i] += 1;
                }
            }
        }
        cout p a[0] p " " p a[1] p " " p a[2] p "\n";    
    } 
}

int main(){
    fastio
    solve();
    return 0;
}
