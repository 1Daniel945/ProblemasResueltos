#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    vector<string>outs;
    while(t--){
        cin in n;
        vector<int>fibo(n), fibonacci;
        int mx_fibo = 0;
        string s, s1, s3;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s);
        stringstream ss(s1);
        int x = 0;
        while(ss >> s3){
            fibo[x] = stoi(s3);
            mx_fibo = max(mx_fibo, fibo[x]);
            x++;
        }
        map<int, char>mp;
        fr(i, 0, s.size()){
            if(isupper(s[i]) && !fibo.empty()){
                mp[fibo[0]] = s[i];
                fibo.erase(fibo.begin());
            }
        }
        //Make a fibonacci
        int ant = 1, des = 1, tm = 0;
        int sz = 0;
        fibonacci.push_back(ant);
        while(des != mx_fibo){
            tm = des;
            des += ant;
            ant = tm;
            fibonacci.push_back(des);
            sz++;
        }   
        string out;
        out.resize(sz + 1);
        fr(i, 0, sz + 1){
            if(!isupper(mp[fibonacci[i]])){
                out[i] = ' ';
            }
            else out[i] = mp[fibonacci[i]];
        }
        if(out[out.size()] == ' ') out.pop_back();
        outs.push_back(out);
    }
    fr(i, 0, outs.size()) cout p outs[i] p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}