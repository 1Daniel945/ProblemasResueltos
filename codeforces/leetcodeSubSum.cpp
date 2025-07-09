#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main() {
    fastio();
    int k, threshold;
    int arr[5] = {1,1,1,1,1};
    cin in k in threshold;
    int x=0;
    for(int i=0; i<(5-(k-1)); ++i) {
        int s=0;            
        for(int j=i; j<i+k; ++j){
            s+=arr[j]; 
        }            
        if(s/k>=threshold)x++;
    }
    cout p x p "\n";
    /* Allocate memory for the inner vectors
    vector<vector<int>>ve((10-(k-1))); // This creates k sub-vectors
    for(int i=0; i<(10-(k-1)); ++i) {
        for(int j=i; j<i+k; ++j){
            ve[i].push_back(arr[j]); // Push elements into the correct sub-vector
        }
    }
    //vector mark
    int x=0;
    for(int i=0; i<(int)ve.size(); ++i){
        ll s=0;
        for(int j=0; j<(int)ve[i].size(); ++j){
            s+=ve[i][j];
        }
        if((s/k)>=threshold)x++;
    }
    cout p x p "\n";*/
    return 0;
}