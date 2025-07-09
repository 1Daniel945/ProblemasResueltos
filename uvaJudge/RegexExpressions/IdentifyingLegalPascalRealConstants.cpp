#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    /*regex patron("^[+-]?[\\d]+$");
    string s; cin in s;
    if(regex_match(s, patron)){
        cout p s p " is legal.\n";
    }
    else cout p s p "is illegal\n";
    */
    string s;
    getline(cin, s);
    queue<pair<int, char>>q;
    string s1 = "";
    fr(i, 0, s.size()){
        if(s.at(i) >= 90 && s.at(i) <= 122){
            s1 += s.at(i);
        }
        else q.push({i, s.at(i)});
    }
    sort(s1.begin(), s1.end());
    int x = 0;
    fr(i, 0, s1.size()){
        cout p s1.at(i), x++;
        if(!q.empty() && x == q.front().first){
            cout p q.front().second, x++;
            q.pop();
        }
    }
    cout p "\n";
    return 0;
}
