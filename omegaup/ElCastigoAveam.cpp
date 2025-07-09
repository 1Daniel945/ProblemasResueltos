#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n, m;
    cin in n in m;
    int mt[n][m];
    vector<int>arr;
    map<int, int>mp;
    fr(i, 0, n){
        fr(j, 0, m){
            cin in mt[i][j];
            if(find(arr.begin(), arr.end(), mt[i][j]) == arr.end()){
                arr.push_back(mt[i][j]);
            }
            mp[mt[i][j]]++;
        }
    }
    sort(arr.begin(), arr.end());
    fr(i, 0, arr.size()){
        cout p mp[arr[i]] p " ";
    }
    cout p "\n";
    return 0;   
}