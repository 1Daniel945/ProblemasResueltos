#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t; cin in t;
    string s;
    char s1;
    while(t--){
        cin in s in s1;
        vector<int>ps;
        fr(i, 0, s.size()){
            if(s.at(i) == s1){
                ps.push_back(i);
            }
        }
        bool f = 0;
        fr(i, 0, ps.size()){
            int x = 0, current = ps[i], y = 0;
            while(current--){
                x++;
            }
            y = s.size() - ps[i] + 1;
            if(x % 2 == 0 && y % 2 == 0){
                f = 1;
                break;
            }
        }
        if(f){
            cout p "YES\n";
        }
        else cout p "NO\n";
    }
    return 0;
}

