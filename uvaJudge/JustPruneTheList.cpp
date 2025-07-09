#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define in >>
#define p <<
#define fastio ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio
    int t, n, m, x;
    cin in t;
    while(t--){
        x = 0;
        cin in n in m;
        vector<int>l1(n), l2(m);
        fr(i, 0, n) cin in l1[i];
        fr(i, 0, m) cin in l2[i];
        fr(i, 0, n){
            if(find(l2.begin(), l2.end(), l1[i]) != l2.end()){
                int d = distance(l2.begin(), find(l2.begin(), l2.end(), l1[i]));
                l2.erase(l2.begin() + d);
                l1[i] = INT_MIN;
            }
        }
        x += (int) l1.size() - count(l1.begin(), l1.end(), INT_MIN);
        x += l2.size();
        cout p x p "\n";
    }
    return 0;
}
