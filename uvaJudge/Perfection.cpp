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

//DHASIA WEZKA QUEEN

int main(){
    fastio
    vector<pair<string, string>>vps;
    int n; 
    while(cin in n, n != 0){
        int r;
        if(n == 1) vps.push_back({to_string(n), "DEFICIENT"});
        else{
            if(n % 2 == 0) r = n / 2;
            else r = (n / 2) + 1;
            int x = 0;
            fr(i, 1, r + 1){
                if(n % i == 0){
                    x += i;
                }
            }
            if(x == n)vps.push_back({to_string(n), "PERFECT"});
            else if(x < n) vps.push_back({to_string(n), "DEFICIENT"});
            else vps.push_back({to_string(n), "ABUNDANT"});
        }
    }
    cout p "PERFECTION OUTPUT\n";
    for(auto e : vps){
        if((int) e.first.size() < 5){
            fr(i, 0, 5 - (int) e.first.size()) cout p " ";
        }
        cout p e.first p "  " p e.second p "\n";
    }
    cout p "END OF OUTPUT\n";
    return 0;
}