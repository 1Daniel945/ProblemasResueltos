#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    string s;
    vector<string>chat;
    map<string, int>mp;
    int outgoing = 0;
    while(getline(cin, s)){
        if(s.at(0) == '+'){
            s.erase(0);
            chat.push_back(s);
            mp[s] = chat.size() - 1;
        }
        else if(s.at(0) == '-'){
            s.erase(0);
            chat.erase(chat.begin() + mp[s]);
        }
        else{
            if(outgoing == 0) outgoing = 1;
            int x = s.find(':');
            string s1 = s.substr(x + 1, s.size() - x);
            string s2 = s.substr(0, x);
            int y = s1.size();
            if(find(chat.begin(), chat.end(), s2) != chat.end()) outgoing += (y * chat.size()) + 1;
            else outgoing += y * chat.size();
        }
    }
    outgoing > 0 ? cout p outgoing - 1 p "\n" : cout p "0\n";
}

int main(){
    fast_io
    solve();
    return 0;
}