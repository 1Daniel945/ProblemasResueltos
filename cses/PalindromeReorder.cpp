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

void solve(){
    string s, s1 = "", s2 = "";
    cin in s; 
    unordered_map<char, int>ump;
    map<char, bool>mp;
    queue<char>q, q1;
    fr(i, 0, s.size()){ 
        ump[s[i]]++;
        if(mp[s[i]] == 0){
            q.push(s[i]);
            mp[s[i]] = 1;
        }
    }
    while(!q.empty()){
        while(ump[q.front()] > 1){
            ump[q.front()] -= 2;
            s1 += q.front();
            s2 += q.front();
        }
        if(ump[q.front()] == 1){
            q1.push(q.front());
        }
        q.pop();
    }
    while(!q1.empty()){
        s1 += q1.front();
        q1.pop();
    }
    reverse(s2.begin(), s2.end());
    s = s1 + s2;
    s1 = s;
    reverse(s.begin(), s.end());
    s != s1 ? cout p "NO SOLUTION\n" : cout p s1 p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 