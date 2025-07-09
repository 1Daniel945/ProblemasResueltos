#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ss second
typedef long long ll;
using namespace std;

vector<int> cribaEuler(int n){
    vector<int>primes;
    vector<bool>isPrime(n + 1, 1);
    fr(i, 2, n + 1){
        if(isPrime[i]) primes.push_back(i);
        for(int j = 0; j < (int) primes.size() && i * primes[j] <= n; ++j){
            isPrime[i * primes[j]] = 0;
            if(i % primes[j] == 0) break;
        }
    }
    return primes;
}

void solve(){
    int n; cin in n;
    vector<int>a = cribaEuler(1000), b;
    int x = n / 2, sm = 0;
    fr(i, 0, x){
        if(i == x - 1){
            int r = n - sm;
            if(find(a.begin(), a.end(), r) != a.end()){
                b.push_back(r);
            }
        }
        else{
            if(sm + a[0] < n) b.push_back(a[0]), sm += a[0];
            else a.erase(a.begin());
        }
    }
    cout p x p "\n";
    fr(i, 0, x) cout p b[i] p " ";
}

void solve1(){
    int n; cin in n;
    int x = n / 2;
    cout p x p "\n";
    if(n % 2 == 0){
        fr(i, 0, x - 1) cout p "2 ";
        cout p "2\n";
    }
    else{
        fr(i, 0, x - 1) cout p "2 ";
        cout p "3\n";
    }
}

int main(){
    fast_io
    solve1();
    return 0;
}