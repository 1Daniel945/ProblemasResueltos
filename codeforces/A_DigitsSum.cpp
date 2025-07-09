#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main() {
    fastio();
    int t, n; cin in t;
    while(t--){
        cin in n;
        string s=to_string(n);
        if(s.size()==1&&(s.at(0)-'0'>=0&&s.at(0)-'0'<=8))cout p "0\n";
        else if(s.size()==1)cout p "1\n";
        else{
            if(s.at(s.size()-1)=='9'){
                //elimino el ultimo
                s.erase(s.size()-1);
                int x = stoi(s);
                x+=1;
                cout p x p "\n"; 
            }
            else {
                s.at(s.size()-1)='#';
                string s2="";
                fr(i,0,s.size()){
                    if(s.at(i)!='#')s2+=s.at(i);
                }
                cout p s2 p "\n";
            }
        }
    }   
    return 0;
}