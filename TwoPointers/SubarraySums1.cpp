#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define in >>
#define p <<
typedef long long ll;
using namespace std;

int main(){
    int n, k;
    cin in n in k;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    //two pointers
    int r = 0, l = 0, c = 0;
    ll sm = 0;
    while(r < n){
        sm += a[r];
        while (sm > k) sm -= a[l], l++;
        if(sm == k) c++;
        r++;
    }
    cout p c p "\n";
    return 0;
}