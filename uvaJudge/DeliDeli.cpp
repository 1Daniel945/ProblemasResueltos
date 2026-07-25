#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : "")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

struct words
{
    string irregular;
    string plural;
};

void DeliDeli() {
    int l, n;
    cin in l in n;
    words x;
    map<string, string>mp;
    map<char, bool>isVowel = {
        {'a', 1}, {'e', 1}, {'i', 1}, 
        {'o', 1}, {'u', 1}
    };
    fr(i, 0, l) {
        cin in x.irregular in x.plural;
        mp[x.irregular] = x.plural;
    }
    string word;
    fr(i, 0, n) {
        cin in word;
        if(mp.count(word)) cout p mp[word] p "\n";
        else {
            char last = word.back();
            if(word.size() >= 2) {
                char last1 = word[word.size() - 2];
                if(!isVowel[last1] && last == 'y') {
                    word.pop_back();
                    word.append("ies");
                }
                else if(last == 'h' && (last1 == 's' || last1 == 'c')) {
                    word.append("es");
                }
                else {
                    if(last == 'o' || last == 's' || last == 'x') {
                        word.append("es");
                    }
                    else word.pb('s');
                }
            }
            else {
                if(last == 'o' || last == 's' || last == 'x') {
                    word.append("es");
                }
                else word.pb('s');
            }
            cout p word p "\n";
        }
    }
}

int32_t main(){
    fast_io
    DeliDeli();    
    return 0;
}