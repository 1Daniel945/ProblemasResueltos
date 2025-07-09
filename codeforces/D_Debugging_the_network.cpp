#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;

void solve(){
    ll t, n; cin in t;
    string s, out, nums;
    while(t--){
        cin in s in n;
        bool isT = 0;
        out = "", nums = "";
        ll sz = 0;
        fr(i, 0, s.size()){
            if(s.at(i) - '0' >= 0 && s.at(i) - '0' <= 9){
                nums += s.at(i);
            }
            else{
                if(!nums.empty()){
                    if(sz + stoll(nums) <= n){
                        sz += stoll(nums);
                        fr(j, 0, stoll(nums)){
                            out += s.at(i);
                        }
                    }
                    else{
                        isT = 1;
                        break;
                    }
                    nums = "";
                }
                else{
                    if(sz + 1 <= n) out += s.at(i), sz++;
                    else{
                        isT = 1;
                        break;
                    }
                } 
            }
        }
        if(isT == 1) cout p "unfeasible\n";
        else cout p out p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}