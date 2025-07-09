#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define in >>
#define p <<
using namespace std;

int main(){
    int n, k, a;
    cin in n in k;
    vector<pair<int, int>>vp;
    fr(i, 0, n){ 
        cin in a;
        vp.push_back({a, i + 1});
    }
    //Pointers
    int r = 0, l = n - 1; 
    sort(vp.begin(), vp.end());
    while(r < l){
        int sm = vp[r].first + vp[l].first; 
        if(sm == k){
            cout p vp[r].second p " " p vp[l].second p "\n"; 
            return 0;
        }
        else if(sm > k) l--;
        else r++;
    }
    cout p "IMPOSSIBLE\n";
    return 0;
}