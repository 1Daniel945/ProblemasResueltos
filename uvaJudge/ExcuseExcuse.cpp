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
#define tab "\t"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void ExcuseExcuse() {
    int k, e;
    vector<vector<string>>vs;
    while(cin in k in e) {
        string word, excuse, word1, word2;
        multiset<string>keywords;
        map<int, vector<string>>mp;
        cin.ignore();
        fr(i, 0, k) {
            getline(cin, word);
            fr(j, 0, word.size()) word[j] = tolower(word[j]);
            keywords.insert(word);
        }
        vector<string>goofy_excuses, originalExcuse, outExcuse;
        fr(i, 0, e) {
            getline(cin, excuse);
            originalExcuse.pb(excuse);
            fr(j, 0, excuse.size()) excuse[j] = tolower(excuse[j]);
            goofy_excuses.pb(excuse);
        }
        int mxKeywords = 0;
        int index = 0;
        for(auto e : goofy_excuses) {
            int c = 0;
            vector<string>filterword;
            word1.clear();
            fr(i, 0, e.size()) {
                if(isalpha(e[i])) word1.pb(e[i]);
                else {
                    filterword.pb(word1);
                    word1.clear();
                    word1.pb(e[i]);
                    filterword.pb(word1);
                    word1.clear();
                }
            }
            if(!word1.empty()) filterword.pb(word1);
            word2.clear();
            for(auto w : filterword) {
                word2.append(w);
                for(auto k : keywords) {
                    if(w == k) c++;
                }
            }
            mxKeywords = max(mxKeywords, c);
            mp[c].pb(originalExcuse[index++]);
        }
        for(auto worstExcuse : mp[mxKeywords]) {
            outExcuse.pb(worstExcuse);
        }
        vs.pb(outExcuse);
    }
    fr(i, 0, vs.size()) {
        cout p "Excuse Set #" p i + 1 p "\n";
        for(auto e : vs[i]) {
            cout p e p "\n";
        }
        cout p "\n";
    }
}

int32_t main() {
    fast_io
    ExcuseExcuse();    
    return 0;
}  