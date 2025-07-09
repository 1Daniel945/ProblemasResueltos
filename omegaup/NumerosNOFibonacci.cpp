#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n; cin in n;
    //Make a fibonacci
    int ant = 1, des = 1, tm = 0;
    vector<int>fibonacci, nofibonacci;
    fibonacci.push_back(ant);
    while(des < 30000){
        tm = des;
        des += ant;
        ant = tm;
        fibonacci.push_back(des);
    }   
    fr(i, 1, n + 1){
        if(find(fibonacci.begin(),fibonacci.end(), i) == fibonacci.end()){
            if(i < n) nofibonacci.push_back(i);
        }
    }
    if(n >= 5){
        fr(i, 0, nofibonacci.size()) cout p nofibonacci[i] p " ";
        cout p "\n"; 
    }
}

int main(){
    fast_io
    solve();
    return 0;
}