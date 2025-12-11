#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

/*vector<int>v = {10, 10, 10, 10, 5, 5};
vector<int>ans;
int f(int cntIndices, int i, int sm){
    if(sm == 30 && cntIndices == 4) return 1;
    if(cntIndices > 4 || i == (int) v.size()) return 0;
    return f(cntIndices + 1, i + 1, sm + v[i]) + f(cntIndices, i + 1, sm);//No lo tomo
}
*/

void solve() {
    /*int t, n; cin in t;
    while(t--) {
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        ll x = (accumulate(a.begin(), a.end(), 0));
        cout p (ll) ceil((double) x / n) p "\n";  
    }*/
    /*int t, n; cin in t;
    string s, s1, s2, s3;
    while(t--){
        cin in n in s in n in s1 in s2;
        deque<char>dq;
        fr(i, 0, s.size()) dq.pb(s[i]);
        reverse(s1.begin(), s1.end());
        fr(i, 0, s2.size()){
            if(s2[i] == 'D'){
                dq.pb(s1.back());
                s1.pop_back();
            }
            else{
                dq.push_front(s1.back());
                s1.pop_back();
            }
        }
        for(auto e : dq) cout p e;
        cout p "\n";
    }*/
    int a, b;
    while(cin in a in b){
        if(a == -1 && b == -1) return;
        if(a == b) cout p "0\n";
        else{
            int x = (100 - (max(a, b))) + min(a, b);
            if(x == 100) cout p "1\n";
            else{
                cout p min(x, max(a, b) - min(a, b)) p "\n";
            }
        }    
    }
}

int32_t main() {
    fast_io
    solve();
    return 0;
}

/*int n = 3;
vector<int>pp = {1, 2, 3};
vector<bool>mark(4);

void permutations(int sz){
    if(len == n){
        for(auto e : pp){
            cout p e p " ";
        }
        cout p "\n";
        return;
    }
    fr(i, 1, n + 1){
        if(mark[i]) continue;
        mark[i] = 1;
        pp.pb(i);
        per(sz + 1);
        pp.pop_back();
        mark[i] = 0;
    }
}*/

/*Apple division
int n = 4;
int smtot = 0;
vector<int>v;

int grupo(int sm, int ps){
    if(ps == n){
        return sm - (smtot - sm);
    }
    //Hacer un tomo o no lo tomo
    return min(grupo(sm + v[ps], ps + 1), grupo(sm, ps + 1));
}

int32_t main(){
    cin in n;
    v.assign(n, 0);
    for(auto &x : v){
        cin in x;
        smtot += x;
    }
    cout p grupo(0, 0) p "\n";
}*/

/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<char> p;
string s;
int n;
vector<bool> mrk;
vector<string>v;

void per(int len){
    if (len == n){
        string x = "";
        for(auto &c: p){    
            x.push_back(c);
        }
        v.push_back(x);
        return;
    }

    for(int i = 0; i < n; i++){    
        if(mrk[i])  continue;

        mrk[i] = true;
        p.push_back(s[i]);
        per(len+1);
        p.pop_back();
        mrk[i] = false;
    }
}

int32_t main() {
    cin >> s;
    n = (int) s.size();
    mrk.assign(n + 1, 0);
    per(0);
    set<string>st(v.begin(), v.end());
    cout << st.size() << "\n";
    for(auto e : st){
        cout << e << "\n";
    }
}
*/