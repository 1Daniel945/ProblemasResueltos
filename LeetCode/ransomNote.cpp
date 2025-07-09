#include <bits/stdc++.h>
#define fr(i, x, n)for(ll i = x; i< (ll) n; ++i)
#define fi(i, x, n)for(int i = x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
unsigned long long mod64 = 18446744073709551615ULL; // 2^64
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    while(!ransomNote.empty()){
        if(magazine.find(ransomNote.at(0)) != string :: npos){
            magazine.at(magazine.find(ransomNote.at(0))) = '#';
            ransomNote.erase(ransomNote.begin());
        }
        else break;
    }
    return ransomNote.size() == 0 ? 1 : 0;
}

int main(){
    fastio
    string s, s1;
    cin in s in s1;
    cout p canConstruct(s, s1) p "\n";
    return 0;
}
